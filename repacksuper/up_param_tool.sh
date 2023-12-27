#!/bin/sh
# Copyleft 2022 Uluruman
version=1.15.7

system_required="tar lz4 file"
script_dir="/repacksuper"
heimdall_path="/usr/bin/heimdall"
unpack_dir="up_param"
out="up_param.bin"

# Colors
if [ ! $NO_COLOR ] && [ $TERM != "dumb" ]; then
  RED="\033[1;31m"
  GREEN="\033[1;32m"
  CYAN="\033[1;36m"
  YELLOW="\033[1;33m"
  BLUE="\033[1;34m"
  BR="\033[1m"
  NC="\033[0m"
fi

# Ctrl+C trap
trap_func() {
  if [ "$img_fname" != "$img_bname" ] && [ -f "$img_dir/$img_fname" ]; then
    echo "Renaming \"$img_fname\" back to \"$img_bname\""
    mv "$img_dir/$img_fname" "$img"
  fi
  echo "Action aborted. Exiting..."
  exit 1
}

heimdall_flash() {
  $heimdall_path/heimdall flash --$partition_name "$out" ${resume:+--resume}
  hm_ec=$?
}


# Check for the system requirements
for i in $system_required
do
  if [ ! $(which "$i") ]; then
    echo "The \"$i\" tool was not found in the system."
    echo "Please install it using your system's package manager. Exiting..."
    exit 1
  fi
done

# Parse arguments
optstr="?hp:d:"
while getopts $optstr opt; do
  case "$opt" in
    p) ext_pit="$OPTARG" ;;
    d) unpack_dir="$OPTARG" ;;
    \?) exit 1 ;;
  esac
done
shift $(expr $OPTIND - 1)

# Help if no args
if [ $# -lt 1 ]; then
  echo
  printf "${RED}============================================================================
${GREEN} Script for unpacking/packing/flashing the up_param.bin file which contains
 the boot, recovery and download mode logos and some additional graphics.
 Should work for the most of Samsung phones. Version $version by Uluruman.
${RED}============================================================================\n
${YELLOW}Usage:${NC} up_param_tool.sh [options] <source> [partition_name]\n
'${CYAN}source${NC}' is one of the following:
  1. up_param.bin
  2. up_param.bin.lz4
  3. BL_[...].tar.md5
  4. directory with the previously extracted JPEG files\n
  In the case of 1-3 the JPEG files will be extracted, in the case of 4 they
  will be packed back into a up_param.bin file and flashed. After extraction
  it is not necessary to keep the original up_param.bin, when packing it will be
  silently overwritten.\n
'${CYAN}partition_name${NC}' (optional): Allows you to specify the UP_PARAM partition name
  manually. Use this option only if you know the ${YELLOW}exact${NC} name of the partition
  (case sensitive), otherwise it will be automatically obtained from PIT
  (partition image table).\n
${GREEN}Options:${NC}\n
'${CYAN}-d <dir>${NC}': Output directory for extraction. Default is \"$unpack_dir\".\n
'${CYAN}-p <pit_file>${NC}': Specify an external PIT file. This option makes it is possible
  to flash devices that can only be flashed in two passes (e.g. SM-A127F) in one
  pass without reboot, even if you don't know the exact partition name. PIT file
  can be extracted from the CSC section of stock firmware.\n\n"
  exit
fi

# Custom partition name
if [ $2 ]; then
  cpn="$2"
fi

# Do the job
if [ -f "$1" ]; then

  echo
  printf "${CYAN}Preparing to extract...${NC}\n"
  src="$1"
  
  if [ ! ${src##BL_*.tar*} ] && file -b -L "$src" | grep "tar archive" > /dev/null; then
    echo "The specified source file is a BL tar archive. Unpacking..."
    # Unpack BL tar
    bin=$(tar t -f "$src" | grep "^up_param.bin" | head -n 1)
    if [ ! "$bin" ]; then
      echo "No up_param.bin file found in \"$1\". Exiting..."
      exit 1
    fi
    echo "\"$bin\" found. Extracting..."
    if [ -f "./$bin" ]; then
      # Overwrite silently
      rm -f "./$bin"
    fi
    tar xv -f "$1" "$bin"
    if [ ! $? -eq 0 ]; then
      echo "Error while unpacking tar. Exiting..."
      exit 1
    fi
    src="./$bin"
  fi
  
  if file -b -L "$src" | grep "LZ4 compressed data" > /dev/null; then
    # Uncompress LZ4
    echo "LZ4 compressed. Decompressing..."
    src_unlz4="${src%.*}"
    if [ -f "$src_unlz4" ]; then
      printf "${BLUE}File with the same name already present in the current directory.${NC}\n"
      read -p "Overwrite it? Y/n " ans
      if [ "$ans" = "n" ]; then
        echo "Then exiting..."
        exit 0
      fi
      rm -f "$src_unlz4"
    fi
    lz4 -d --rm "$src"
    if [ $? -ne 0 ]; then
      echo "Error while uncompressing. Exiting..."
      exit 1
    fi
    src="$src_unlz4"
  fi
  
  # Verify that it's tar
  echo "Verifying the up_param.bin format"
  src_fmt=$(file -b -L "$src" | grep "tar archive")
  if [ ! "$src_fmt" ]; then
    echo "up_param.bin has unknown format. Exiting..."
    exit 1
  else
    echo "Determined as \"$src_fmt\" (correct)"
  fi
  
  # Unpack
  echo
  printf "${CYAN}Extracting JPEGs...${NC}\n"
  if [ ! -d "$unpack_dir" ]; then
    echo "Creating the \"$unpack_dir\" directory"
    mkdir "$unpack_dir"
  fi
  if [ $(ls -1 -A "$unpack_dir" | head -n 1) ]; then
    printf "${BLUE}The output directory is not empty.${NC}\n"
    read -p "Purge it? Y/n " ans
    if [ "$ans" = "n" ]; then
      echo "Then exiting..."
      exit 0
    fi
    echo "Purging the \"$unpack_dir\" directory"
    rm -rf "$unpack_dir\*"
  fi
  echo "Extracting..."
  tar xv -f "$src" -C "$unpack_dir"
  if [ ! $? -eq 0 ]; then
    echo "Error while extracting files. Exiting..."
    exit 1
  fi
  echo "Fixing the write attributes."
  chmod +w -R "$unpack_dir"
  
  echo
  printf "${CYAN}Done!${NC}\n\n"
  echo "The JPEG files are in the following directory:"
  printf "${GREEN}$(realpath "$unpack_dir")${NC}\n"
  printf "
${YELLOW}WARNING!${NC} When editing the images ${RED}DO NOT${NC} alter the image dimensions! Edit only
the contents, otherwise the phone will bootloop or even ${RED}BRICK${NC} completely, in the
case you altered the sizes of the Download mode images. Parameters of the JPEG
encoding are not critical, although it's better not to export any unnecessary
data such as Exif data or color profiles.\n\n"
  
elif [ -d "$1" ]; then

  src_dir="${1%*/}"
  out_fname=$(basename "$out")

  # Verify
  echo
  printf "${CYAN}Verifying the files...${NC}\n"
  for i in $src_dir/*; do
    echo "Verifying \"$i\""
    if [ ! -f "$i" ]; then
      echo "\"$i\" is not a file. Exiting..."
      exit 1
    fi
    if ! file -b -L "$i" | grep "JPEG image data" > /dev/null; then
      echo "\"$i\" is not a JPEG image file. Exiting..."
      exit 1
    fi
    if [ ${i##*.} != "jpg" ]; then
      echo "\"$i\" extension is not .jpg. Renaming..."
      mv "$i" "${i%.*}.jpg"
    fi
  done
  echo "All files seem correct"
  
  # Pack
  echo
  printf "${CYAN}Packing into \"$out\"...${NC}\n"
  if [ -f "$out" ]; then
    # Overwrite silently
    rm -f "$out"
  fi
  find "$src_dir" -maxdepth 1 -type f -printf "%P\n" -iname "*.jpg" | \
    sort -f | tar cv -f "$out" --owner=dpi --group=dpi -C "$src_dir" -T -

  echo
  printf "${CYAN}Flashing...${NC}\n"
  read -p "Are you now in the Download mode? Y/n " ans
  if [ "$ans" = "n" ]; then
    echo "Then exiting..."
    exit 0
  fi

  # Use PIT
  if [ ! $cpn ]; then
    echo
    printf "${CYAN}Getting PIT (partition image table)...${NC}\n"
    if [ "$ext_pit" ]; then
      echo "Using external PIT: $ext_pit"
      if [ ! -f "$ext_pit" ]; then
        echo "PIT file does not exist. Exiting..."
        exit 1
      fi
      pit=$("$heimdall_path/heimdall" print-pit --file "$ext_pit")
    else
      echo "Obtaining PIT from device"
      pit=$("$heimdall_path/heimdall" print-pit --no-reboot)
      resume=true
    fi
    if [ ! $? -eq 0 ]; then
      echo "Heimdall error. Exiting..."
      exit 1
    fi

    # Get partition name by file name
    out_rx=$(echo "$out_fname" | sed "s/\\\/\\\\\\\\/;s/\./\\\\./") # regexify . and \
    partition_name=$(echo "$pit" | grep -B 1 -i "^Flash Filename: $out_rx$" | head -n 1 | cut -c 17-)
    if [ ! "$partition_name" ]; then
      printf "${RED}Cannot auto-detect partition name.${NC}\n"
      printf "${BLUE}You can enter the name of partition manually.${NC}\n"
      printf "For up_param.bin partition name is usually either \"UP_PARAM\" or \"up_param\"\n"
      read -p "Enter partition name (case sensitive): " partition_name
    else
      printf "${GREEN}Parition name detected${NC}: $partition_name\n"
    fi
  else
    partition_name=$cpn
    echo "Flashing file \"$out_fname\" into partition \"$partition_name\""
  fi

  # Flash
  echo
  printf "${CYAN}Flashing...${NC}\n"
  trap "trap_func" INT
  heimdall_flash
  if [ ! $hm_ec -eq 0 ] && [ $resume ]; then
    printf "${RED}Heimdall was unable to upload firmware.${NC}\n"
    read -p "Did you see any uploading progress (percents counting up) y/N " ans
    if [ "$ans" != "y" ]; then
      echo
      printf "${YELLOW}Then let's try a different approach. Now restart your device and enter the\n"
      printf "Download mode once again.${NC}\n"
      read -p "Have you done it? Y/n " ans
      if [ "$ans" != "n" ]; then
        resume=
        heimdall_flash
      fi
    fi
  fi
  trap - INT

  # Outro
  echo "Heimdall exit code: $hm_ec"
  if [ ! $hm_ec -eq 0 ]; then
    printf "${RED}Heimdall was unable to upload firmware.${NC}\n"
    printf "${YELLOW}You have to resort to Odin for Windows. Sorry.${NC}\n"
    echo "Exiting..."
    exit 0
  else
    printf "${GREEN}Success!${NC}\n\n"
  fi
  
else
echo "Cannot use the specified source. Exiting..."
  exit 1
fi

