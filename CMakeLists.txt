cmake_minimum_required(VERSION 3.31)
project(algorithm)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE PROBLEM_FILES "baekjoon/**/*.cpp")

foreach(file_path ${PROBLEM_FILES})
    get_filename_component(file_name ${file_path} NAME_WE)
    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" safe_name ${file_name})
    add_executable(${safe_name} ${file_path})
    set_target_properties(${safe_name} PROPERTIES OUTPUT_NAME ${file_name})

endforeach()