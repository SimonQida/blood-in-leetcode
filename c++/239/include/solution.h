#include<deque>

using namespace std;

//front();
//back();
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int size = nums.size();
        for(int i = 0; i < k; ++i){
            singlePush(nums[i]);
        }
        res.push_back(maxQ.front());

        //singlePop(nums[i]);
        for(int i =k; i < size; ++i){
            //
            singlePop(nums[i-k]);
            singlePush(nums[i]);
            res.push_back(maxQ.front());
        }
        return res;
    }

    void singlePush(int num){
        while(maxQ.size() && maxQ.back() < num){
            maxQ.pop_back();
        }
        maxQ.push_back(num);
    }

    void singlePop(int num){
        if(maxQ.size() && maxQ.front() == num){
            maxQ.pop_front();
        }
    }

    deque<int> maxQ;
};
