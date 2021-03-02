#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
}

TEST(TEST, SORTNormal){
    vector<int> v{12, 34, 3};
    sort(v.begin(), v.end());
    EXPECT_EQ(v.size(), 3);
    EXPECT_EQ(v[0], 3);
    EXPECT_EQ(v[1], 12);
    EXPECT_EQ(v[2], 34);
}

TEST(TEST, SORTEmpty){
    vector<int> v;
    sort(v.begin(), v.end());
    EXPECT_EQ(v.size(), 0);
}

TEST(TEST, Solution){
    vector<int> v {1,2,5};
    Solution sol;
    EXPECT_EQ(sol.coinChange(v, 11), 3);
    EXPECT_EQ(sol.coinChange(v, 0), 0);
}

TEST(TEST, SolutionOne){
    vector<int> v {2};
    Solution sol;
    EXPECT_EQ(sol.coinChange(v, 3), -1);
    EXPECT_EQ(sol.coinChange(v, 2), 1);
}

TEST(TEST, Solution1){
    vector<int> v {1,2,5};
    Solution sol;
    EXPECT_EQ(sol.coinChange(v, 11), 3);
    EXPECT_EQ(sol.coinChange(v, 10), 2);
}

TEST(TEST, SolutionBad){
    vector<int> v {186, 419, 83, 408};
    Solution sol;
    EXPECT_EQ(sol.coinChange(v, 6249), 20);
}

