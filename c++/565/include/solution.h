#include<iostream>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums){
        int maxLen =0;
        for(int i =0; i < nums.size(); ++i){
            if(nums[i] != -1){
                int tmpLen = 0;
                int tmp = i;
                while(nums[tmp] != -1){
                    int j = tmp;
                    tmp = nums[j];
                    nums[j] = -1;
                    ++tmpLen;
                }
                maxLen = max(maxLen , tmpLen);
            }
        }

        return maxLen;
    }
};
