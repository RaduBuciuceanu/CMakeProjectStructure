cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${CMPS_PRESENTATION_CONSOLE} VERSION ${CMPS_PRESENTATION_CONSOLE_VERSION})

file(GLOB HEADERS
		./src/Cmps.Presentation.Console/*.h)

file(GLOB SOURCES
		./src/Cmps.Presentation.Console/*.cpp)

add_executable(${CMPS_PRESENTATION_CONSOLE} ${SOURCES} ${HEADERS})

target_link_libraries(${CMPS_PRESENTATION_CONSOLE} PRIVATE ${CMPS_DATA} ${CMPS_BUSINESS})
target_include_directories(${CMPS_PRESENTATION_CONSOLE} PRIVATE ./src)