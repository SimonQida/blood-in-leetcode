#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    EXPECT_EQ(6, s.maximumScore(2, 4, 6));
    EXPECT_EQ(7, s.maximumScore(4, 4, 6));
    EXPECT_EQ(16, s.maximumScore(117, 8, 8));
}
