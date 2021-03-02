#include<vector>
using std::vector;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0 ;i < nums.size(); ++i){
            if(i == 0)
                continue;
            nums[0] = nums[i] ^ nums[0];
        }
        return nums[0];
    }
};
