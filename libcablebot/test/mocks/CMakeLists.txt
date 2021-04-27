project(cablebot-mocks)

#
set(SOURCES
        CableBotDemoMock.h
)

add_library(cablebot-mocks SHARED ${SOURCES})
set_target_properties(cablebot-mocks PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(cablebot-mocks
        PUBLIC
            "."
        )