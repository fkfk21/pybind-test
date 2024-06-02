#! /bin/bash

PROJECT_DIR=$(dirname $PACKAGE_DIR)
cd $PROJECT_DIR
poetry run python -m pip install -e $PROJECT_DIR/package