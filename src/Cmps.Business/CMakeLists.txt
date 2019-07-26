cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${CMPS_BUSINESS})

file(GLOB HEADERS
        ./include/Cmps.Business/*.h
        ./include/Cmps.Business/*/*.h)

file(GLOB SOURCES
        ./src/Cmps.Business/*)

add_library(${CMPS_BUSINESS} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${CMPS_BUSINESS} PUBLIC ./include PRIVATE ./src)

target_compile_definitions(${CMPS_BUSINESS} PRIVATE CMPS_BUSINESS=1)
