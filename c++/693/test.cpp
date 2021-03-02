#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    EXPECT_EQ(true, s.hasAlternatingBits(5));
    EXPECT_EQ(true, s.hasAlternatingBits(10));
    EXPECT_EQ(false, s.hasAlternatingBits(7));
    EXPECT_EQ(false, s.hasAlternatingBits(3));
    EXPECT_EQ(false, s.hasAlternatingBits(11));
}
