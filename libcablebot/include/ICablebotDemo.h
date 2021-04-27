#ifndef CABLEBOT_BUILD_AND_TEST_ICABLEBOTLIBDEMO_H
#define CABLEBOT_BUILD_AND_TEST_ICABLEBOTLIBDEMO_H

#include <cstdint>
namespace cablebot
{
        class ICablebotDemo {
                public:
                        ICablebotDemo() = default;
                        virtual ~ICablebotDemo() = default;
                        virtual int32_t Demo_function(int32_t num1, int32_t num2) = 0;
        };

}
#endif
