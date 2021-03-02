#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    EXPECT_EQ(true, s.judgeSquareSum(5));
    EXPECT_EQ(false, s.judgeSquareSum(6));
    EXPECT_EQ(true, s.judgeSquareSum(0));
    EXPECT_EQ(true, s.judgeSquareSum(1));
    int x = ~(1<<31);
    std::cout<<x<<" "<<x+1;
    EXPECT_EQ(false, s.judgeSquareSum(x));
}
