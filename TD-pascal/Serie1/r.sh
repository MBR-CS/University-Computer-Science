#!/bin/bash

# Define ANSI color codes
RED='\033[0;31m'   # Red color
NC='\033[0m'       # No color (to reset color back to default)
GREEN='\033[0;32m' # Green color

if [ "$1" == "cpp" ]; then
    clang++ -std=c++11 "$2" -o a.out
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}Done${NC}"
        ./a.out
    else
        echo -e "${RED}ERROR${NC}"
    fi
elif [ "$1" == "--help" ] || [ "$1" == "-h" ]; then
    echo "
    ./r.sh [option] filename
    option:
        cpp  -- for run c++
        pas  -- for run pascal
        "
else
    fpc "$2.pas"
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}Done${NC}"
        ./"$2"
    else
        echo -e "${RED}ERROR${NC}"
    fi
fi
