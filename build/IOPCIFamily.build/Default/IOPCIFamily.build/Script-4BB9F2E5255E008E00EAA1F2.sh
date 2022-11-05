#!/bin/bash -ex
if [[ ( "${ACTION}" == installhdrs || "${ACTION}" == installapi || "${ACTION}" == install ) ]]; then
    mkdir -p ${SCRIPT_OUTPUT_FILE_0}
    
    # stage .iig and .h files
    cp ${SCRIPT_INPUT_FILE_0}/*.iig ${SCRIPT_OUTPUT_FILE_0}
    cp ${SCRIPT_INPUT_FILE_1} ${SCRIPT_OUTPUT_FILE_0}

    # invoke iig to generate .h files (on platforms that need it)
    if [[ ( "${PLATFORM_NAME}" == macosx || "${PLATFORM_NAME}" == iphoneos ) ]]; then
        . ${SRCROOT}/PCIDriverKit/iigKernelFramework.sh ${SCRIPT_INPUT_FILE_0} ${SDK_NAME}
        
        # stage iig-generated .h files
        cp ${SCRIPT_INPUT_FILE_0}/*.h ${SCRIPT_OUTPUT_FILE_0}
        
        # remove known private file(s)
        rm ${SCRIPT_OUTPUT_FILE_1}
    fi
fi

