cmake_minimum_required(VERSION 3.12)

set(CPPM_VERSION 0.0.13)
include(cmake/cppm_loader.cmake)
cppm_project()

project(hash-lib VERSION 0.8.0 LANGUAGES C CXX)
cppm_setting()
cppm_cxx_standard(17)
cppm_compiler_option(DEFAULT)



cppm_target_define(hash-lib STATIC
SOURCES
    src/crc32.cpp
    src/keccak.cpp
    src/md5.cpp
    src/sha1.cpp
    src/sha256.cpp
    src/sha3.cpp
)


set(hash-lib_global_deps )
cppm_target_dependencies(hash-lib
   ${hash-lib_global_deps})


cppm_target_install(hash-lib)

