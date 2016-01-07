cmake_minimum_required(VERSION 3.2)
project(led_on)

SET(ARM_TOOL_CHAIN $ENV{HOME}/dev/rpi/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64)
SET(CMAKE_SYSTEM_NAME Linux)

# rpi cross compiler
SET(CMAKE_C_COMPILER   ${ARM_TOOL_CHAIN}/bin/arm-linux-gnueabihf-gcc)
SET(CMAKE_CXX_COMPILER ${ARM_TOOL_CHAIN}/bin/arm-linux-gnueabihf-g++)

# rpi target environment
SET(CMAKE_FIND_ROOT_PATH  ${ARM_TOOL_CHAIN}/arm-linux-gnueabihf/libc)

SET(SOURCE_FILES main.c)

ADD_EXECUTABLE(led_on ${SOURCE_FILES} rpi.h rpi.h rpi.c)