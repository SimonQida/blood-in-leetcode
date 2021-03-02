using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int maxLen = 0;
        int begin =0, end =0;
        while(end < s.size()){
            maxCost -= abs(s[end] - t[end]);
            ++end;
            
            while(maxCost < 0){
                maxCost += abs(s[begin] - t[begin]);
                ++begin;
            }

            maxLen = max(maxLen, end - begin);
        }

        return maxLen;
    }
};
