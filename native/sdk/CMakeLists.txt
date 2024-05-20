cmake_minimum_required(VERSION 3.5)

project(hello_world)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(hello_library SHARED
  src/helloworld.c
)
# set a alias for hello_library
add_library(hello::library ALIAS hello_library)
# Add an executable with the above sources
target_include_directories(hello_library
  PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

add_executable(hello_binary
  src/main.c
)

target_include_directories(hello_binary
  PRIVATE
    ${PROJECT_SOURCE_DIR}/../build/ffmpeg_build/include
)

target_link_directories(hello_binary
  PRIVATE
    ${PROJECT_SOURCE_DIR}/../build/ffmpeg_build/bin
)

target_link_libraries(hello_binary
  PRIVATE
    hello::library
    avcodec-61
    avdevice-61
    avfilter-10
    avformat-61
    avutil-59
    postproc-58
    swresample-5
    swscale-8
)

