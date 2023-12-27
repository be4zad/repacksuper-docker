FROM alpine:latest

RUN apk add --no-cache coreutils android-tools heimdall xz lz4 gzip unzip jq file

COPY repacksuper/ /repacksuper

WORKDIR /workdir

ENTRYPOINT [ "/repacksuper/repacksuper.sh" ]
