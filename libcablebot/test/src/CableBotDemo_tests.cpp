#include <string>
#include "gtest/gtest.h"
#include "CablebotDemo.h"

class cablbot_demo_tests : public ::testing::Test
{
protected:
    cablbot_demo_tests() {
    }

    ~cablbot_demo_tests() override = default;

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

};

TEST_F(cablbot_demo_tests, cablbot_demo_result_is_correct)
{
        // Arrange;
        const int32_t num1 = 1;
        const int32_t num2 = 2;
        int expected = num1 + num2;
        cablebot::CablebotDemo cablebot_demo;

        // Act
        auto actual = cablebot_demo.Demo_function(num1, num2);

        // Assert
        ASSERT_EQ(actual, expected);
}
