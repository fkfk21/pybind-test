cmake_minimum_required(VERSION 3.13)
project(pybind_sample LANGUAGES CXX)


# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/../.venv/lib/python3.10/site-packages/pybind11 ${CMAKE_PREFIX_PATH})

find_package(Python REQUIRED COMPONENTS Interpreter Development)
find_package(pybind11 CONFIG REQUIRED)

# create python module by pybind11
pybind11_add_module(pybind_sample ${CMAKE_SOURCE_DIR}/src/sample.cpp)
target_link_libraries(pybind_sample PUBLIC pybind11::module)

add_custom_command(TARGET pybind_sample POST_BUILD
    COMMAND /bin/bash ${CMAKE_SOURCE_DIR}/post_build.sh
    COMMENT "Execute post build  script"
)

