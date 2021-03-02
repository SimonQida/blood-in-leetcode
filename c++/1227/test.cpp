#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    EXPECT_EQ(0.5, s.nthPersonGetsNthSeat(30110));
}
