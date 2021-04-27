#ifndef CABLEBOT_BUILD_AND_TEST_CABLEBOTLIBDEMO_H
#define CABLEBOT_BUILD_AND_TEST_CABLEBOTLIBDEMO_H

#include "ICablebotDemo.h"

namespace cablebot {

        class CablebotDemo : public ICablebotDemo {
                public:
                        CablebotDemo() = default;
                        ~CablebotDemo() override = default;
                        int32_t Demo_function(int32_t num1, int32_t num2) override;
        };

}
#endif
