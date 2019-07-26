cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${CMPS_DATA} VERSION ${CMPS_DATA_VERSION})

file(GLOB HEADERS
		./include/Cmps.Data/*.h
		./include/Cmps.Data/Repositories/*.h)

file(GLOB SOURCES
		./src/Cmps.Data/*.cpp
		./src/Cmps.Data/Repositories/*.cpp)

add_library(${CMPS_DATA} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${CMPS_DATA} PUBLIC ./include PRIVATE ./src)

target_link_libraries(${CMPS_DATA} PRIVATE ${CMPS_BUSINESS})

target_compile_definitions(${CMPS_DATA} PRIVATE CMPS_DATA=1)
