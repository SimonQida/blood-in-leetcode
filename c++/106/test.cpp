#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> inorder {9,8,3,15,20,7}, postorder{8, 9,15, 7,20, 3};
    s.buildTree(inorder, postorder);
}
