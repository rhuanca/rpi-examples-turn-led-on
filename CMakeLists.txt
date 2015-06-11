cmake_minimum_required(VERSION 3.2)
project(led_on)

SET(ARM_TOOL_CHAIN /home/rhuanca/dev/rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64)
SET(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER ${ARM_TOOL_CHAIN}/bin/arm-linux-gnueabihf-gcc)

set(SOURCE_FILES main.c)

add_executable(led_on ${SOURCE_FILES} rpi.h rpi.h rpi.c)