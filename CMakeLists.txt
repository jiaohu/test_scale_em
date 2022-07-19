cmake_minimum_required(VERSION 3.22)

include(FetchContent)

FetchContent_Declare(scale URL https://github.com/soramitsu/scale-codec-cpp/archive/refs/tags/v1.0.4.tar.gz)

FetchContent_GetProperties(scale)
if (NOT scale_POPULATED)
    FetchContent_Populate(scale)
    add_subdirectory(${scale_SOURCE_DIR} ${scale_BINARY_DIR} EXCLUDE_FROM_ALL)
endif ()

project(test_scale_em)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_scale_em main.cpp)

target_link_libraries(test_scale_em scale)

# open it when you want to build wasm
#set_target_properties(test_scale PROPERTIES  LINK_FLAGS " -std=c++17 -Os -s ERROR_ON_UNDEFINED_SYMBOLS=0")