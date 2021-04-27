cmake_minimum_required(VERSION 3.10)

set(CABLEBOT_SOURCES
        src/tests_main.cpp
        src/CableBotDemo_tests.cpp)

add_executable( libcablebot_unit_tests
                ${CABLEBOT_SOURCES})

target_link_libraries( libcablebot_unit_tests
                        gtest
                        gmock
                        cablebot)

add_test(
    NAME libcablebot_unit_tests
    COMMAND libcablebot_unit_tests
)

if(BUILD_COVERAGE)
    SETUP_TARGET_FOR_COVERAGE_LCOV(
            NAME libcablebot_unit_tests_coverage
            EXECUTABLE ctest -V ${n_cores} -R "libcablebot_"
            EXCLUDE '*wrapper*' "src/Linux.cpp" "include/*.h"
            DEPENDENCIES libcablebot_unit_tests)
endif()
