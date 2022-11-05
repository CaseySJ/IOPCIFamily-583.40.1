#!/bin/sh
script="${SRCROOT}/config/generate-symbols-plist.sh";
echo "${SYMROOT}"
if [ -x "$script" ]; then
    . "$script" ${SYMROOT}/symbolsets.plist ${SRCROOT}/Info-IOPCIFamily.plist ${SRCROOT}/config/IOPCIFamily.exports
fi

