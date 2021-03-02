#include<unordered_map>
#include<vector>

using std::unordered_map;
using std::vector;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> freum;
        for(int i = 0; i < nums.size(); ++i){
            ++freum[nums[i]];
        }
        vector<vector<int> >countBu(nums.size(), vector<int>());
        for(auto itr = freum.begin(); itr != freum.end(); ++itr)
            countBu[itr->second-1].push_back(itr->first);

        for(auto itr = countBu.rbegin(); (itr != countBu.rend()) && (k != 0); ++itr){
            for(int i = 0; (i < itr->size()) && (k != 0); ++i){
                res.push_back(itr->at(i));
                --k;
            }
        }
        return res;

    }
};
