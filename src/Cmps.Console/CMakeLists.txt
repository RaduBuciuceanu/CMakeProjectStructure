cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${CMPS_CONSOLE} VERSION ${CMPS_CONSOLE_VERSION})

file(GLOB HEADERS
		./src/Cmps.Console/*.h)

file(GLOB SOURCES
		./src/Cmps.Console/*.cpp)

add_executable(${CMPS_CONSOLE} ${SOURCES} ${HEADERS})

target_link_libraries(${CMPS_CONSOLE} PRIVATE ${CMPS_DATA} ${CMPS_BUSINESS})
target_include_directories(${CMPS_CONSOLE} PRIVATE ./src)