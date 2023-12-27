# Repacksuper v1.15.9 in Docker
This is the minimalistic set of tools + a script for Linux for the automated
ground-up repacking and flashing of the Samsung Galaxy super.img, replacing
the stock Android system with something much less intrusive and obtrusive
(e.g. LineageOS). Or just some other GSI (Generic System Image).

More information:
https://xdaforums.com/t/installing-gsi-by-repacking-super-img-on-sm-a127f-and-sm-a325f-linux.4365511/

Scripts created by:
https://xdaforums.com/m/uluruman.11864933/

## Requirements
* Docker
* Stock firmware
* GSI image

## Install
`docker pull be4zad/repacksuper-docker`

## Usage
Put your stock firmware and GSI image in your current directory and
change `STOCK_FIRMWARE`, `GSI_IMAGE` and `DESTINATION`:

```
docker run --rm -it \
    --volume $(pwd):/workdir \
    --device /dev/bus/usb:/dev/bus/usb \
    repacksuper-docker \
    STOCK_FIRMWARE \
    GSI_IMAGE \
    DESTINATION
```

Example for Samsung A03 Core (A032FXXU2BWC3):

```
docker run --rm -it \
    --volume $(pwd):/workdir \
    --device /dev/bus/usb:/dev/bus/usb \
    repacksuper-docker -x -e \
    android12_A032FXXU2BWC3_A032FOJM2BWC4_MID_5-23-23_17-14-38.zip \
    crDroid-9.0-a64-bvN-Unofficial.img.xz \
    crDroid-9.0-a64-bvN-Unofficial-A032F-super.tar
```

## License
See [LICENSE](./LICENSE).
