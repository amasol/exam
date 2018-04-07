cmake_minimum_required(VERSION 3.8)
project(48)

set(CMAKE_C_STANDARD 99)

# You need to download and compile the Libft specificly for you machine
# put header file and .a file in "Libft" folder in your project
link_directories(${PROJECT_SOURCE_DIR}/Libft)
include_directories(${PROJECT_SOURCE_DIR}/Libft)

set(SOURCE_FILES
        src/alpha_mirror.c
        src/atoi.c)

add_executable(48 ${SOURCE_FILES})
target_link_libraries(48 -lft)
