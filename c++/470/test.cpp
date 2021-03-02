#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    std::cout<<sol.rand10();
    EXPECT_EQ(1, 1);
}
