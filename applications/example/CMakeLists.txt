cmake_minimum_required(VERSION 3.10)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(cablebot_example
                src/main.cpp
        )

target_link_libraries( cablebot_example
                        rpp
                        cablebot
                        stdc++fs)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()
