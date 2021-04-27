cmake_minimum_required(VERSION 3.10)

include_directories(mocks
        support)

set(SRCS
        src/tests_main.cpp
        )

add_executable(cablebot_example_unit_tests ${SRCS})

target_link_libraries(  cablebot_example_unit_tests
                        gtest
                        gmock
                        rpp
                        cablebot
                        stdc++fs)

add_test(
        NAME cablebot_example_unit_tests
        COMMAND cablebot_example_unit_tests
        )
