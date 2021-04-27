cmake_minimum_required(VERSION 3.10)
project(libcablebot)

set(librpp_VERSION_MAJOR 0)
set(librpp_VERSION_MINOR 1)


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/include )

set(SOURCES
        include/ICablebotDemo.h
        include/CablebotDemo.h
        src/CablebotDemo.cpp)


add_library(cablebot SHARED ${SOURCES})

target_include_directories(cablebot
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )

target_link_libraries(cablebot stdc++fs)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()
