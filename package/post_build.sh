#! /bin/bash
## this script is executed in the process of cmake

PYBIND_MODULE_NAME=pybind_sample

PACKAGE_NAME=pybind_sample
PACKAGE_DIR=$(dirname $0)
PROJECT_DIR=$(dirname $PACKAGE_DIR)

echo "Post build script running..."
cd $PACKAGE_DIR
cp build/*.so $PACKAGE_NAME

cd $PACKAGE_NAME
stubgen -m $PYBIND_MODULE_NAME -o ../$PACKAGE_NAME
# stubgen __init__.py -o ..

echo "Pybind package installed in virtual env pip"