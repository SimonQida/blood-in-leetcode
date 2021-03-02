#include<vector>
using std::vector;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int allRes = 0;
        for(int i : nums){
            allRes ^= i;
        }
        int maxBit = 0;
        for(int index = 31; index >=0 ;--index){
            int base = 1;
            base <<= index;
            if((allRes & base) == base){
                maxBit = base;
                break;
            }
        }
        vector<int> v1,v2;
        for(int i : nums){
            if((i & maxBit) == maxBit)
                v1.push_back(i);
            else
                v2.push_back(i);
        }
        int res1, res2 ;
        res1 = res2 = 0;
        for(int i: v1){
            res1 =res1 ^ i;
        }

        for(int i : v2){
            res2 ^= i;
        }
        return vector<int>{res1 ,res2};
    }
};
