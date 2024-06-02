#! /bin/bash

SCRIPT_DIR=$(dirname $0)
cd $SCRIPT_DIR/package
mkdir -p build && cd build && cmake .. && make