cmake_minimum_required(VERSION 3.16)
project(dogon-example)
message(STATUS "Initiating compile using CMake ${CMAKE_VERSION}")

set(CMAKE_SYSTEM_NAME Linux)
# set(CMAKE_SYSTEM_PROCESSOR arm)

# add cmake/ directory as cmake module path
list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_SOURCE_DIR}/cmake")

set(THREADS_PREFER_PTHREAD_FLAG ON)
set(CMAKE_CXX_STANDARD 17)
include(FindCcache)

set(EXECUTABLE_FLAG)
set(drogon_ctl OFF)
set(BUILD_EXAMPLES OFF)
set(BUILD_ORM OFF)
set(COZ_PROFILING OFF)
set(BUILD_DOC OFF)
set(BUILD_SHARED_LIBS OFF)
set(BUILD_BROTLI OFF)
set(BUILD_YAML_CONFIG OFF)
set(USE_SUBMODULE ON)

add_subdirectory(drogon)
add_subdirectory(src)
