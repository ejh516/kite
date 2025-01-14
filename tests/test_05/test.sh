#!/bin/bash
 
# This script will compare the .h5 file


S=3  # the seed that will be used by KITE
file1=/Calculation/ldos/lMU




if [[ "$1" == "redo" ]]; then
    # Use an already existing configuration file
    cp configORIG.h5 config.h5
    chmod 755 config.h5
    SEED=$S ../KITEx config.h5 > log_KITEx
    python ../compare.py configREF.h5 $file1 config.h5 $file1
fi

if [[ "$1" == "script" ]]; then
    # Create the configuration file from scratch
    python config.py > log_config
    SEED=$S ../KITEx config.h5 > log_KITEx
    python ../compare.py configREF.h5 $file1 config.h5 $file1
    rm -r __pycache__
fi


