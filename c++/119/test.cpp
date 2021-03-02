#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

using namespace std;

void print(vector<int> x){
    for(int xx: x){
        cout<<xx<<" ";
    }
    cout<<endl;
}
TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    print(s.getRow(1));
    s.getRow(2);
    s.getRow(3);
    print(s.getRow(7));
}
