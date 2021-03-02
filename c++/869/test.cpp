#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
}

TEST(TEST, GETLEN){
    Solution sol;
    EXPECT_EQ(sol.getLen(100), 3);
    EXPECT_EQ(sol.getLen(10235345), 8);
    EXPECT_EQ(sol.getLen(1023534512), 10);
    EXPECT_EQ(sol.getLen(1), 1);
    EXPECT_EQ(sol.getLen(0), 0);
}

TEST(POWEROF, CHECK){
    Solution sol;
    EXPECT_TRUE(sol.isPowerOf2(1));
    EXPECT_TRUE(sol.isPowerOf2(2));
    EXPECT_FALSE(sol.isPowerOf2(21));
    int int_max = 1<<30;
    EXPECT_TRUE(sol.isPowerOf2(int_max));
}

TEST(FINAL, reorderedPowerOf2){
    Solution sol;
    EXPECT_TRUE(sol.reorderedPowerOf2(1024));
    EXPECT_TRUE(sol.reorderedPowerOf2(1204));
    EXPECT_TRUE(sol.reorderedPowerOf2(1));
    EXPECT_FALSE(sol.reorderedPowerOf2(124));
}
