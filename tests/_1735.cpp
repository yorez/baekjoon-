#include "_1735.h"

#include <gtest/gtest.h>

namespace _1735 {
    namespace {
        TEST(_1735, Solution) {
            Solution solution(2,7,3,5);
            EXPECT_EQ(solution.GetAnswer(), "31 35");
        }
    }
}
