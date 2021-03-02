#include<deque>
using namespace std;

class Solution {

    class SingleMax{
        public:
            void push(int num){
                while(data.size() && data.back() < num){
                    data.pop_back();
                }
                data.push_back(num);
            }

            void pop(int num){
                if(data.size() && data.front() == num){
                    data.pop_front();
                }
            }

            int max(){
                return data.empty() ? 0: data.front();
            }

        private:
            deque<int> data;
    };

    class SingleMin{
        public:
            void push(int num){
                while(data.size() && data.back() > num){
                    data.pop_back();
                }
                data.push_back(num);
            }

            void pop(int num){
                if(data.size() && data.front() == num){
                    data.pop_front();
                }
            }

            int min(){
                return data.empty() ? 0: data.front();
            }

        private:
            deque<int> data;
    };

public:
     int longestSubarray(vector<int>& nums, int limit) {
        int begin =0;
        SingleMax smax;
        SingleMin smin;
        int maxLen =0;

        for(int end =0; end < nums.size(); ++end){
            smax.push(nums[end]);
            smin.push(nums[end]);

            while(begin <= end){
                if(smax.max() - smin.min() > limit){
                    smax.pop(nums[begin]);
                    smin.pop(nums[begin]);
                    ++begin;
                }
                else
                    break;
            }
            maxLen = max(maxLen, end - begin +1);
        }

        return maxLen;
    }
};
