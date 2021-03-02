using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int dupCount =0;
        int begin = 0, end= 0;
        int maxLen = 0;
        while(end < s.size()){
            //
            ++buf[s[end]];
            if(buf[s[end]] == 2){
                ++dupCount;
            }
            ++end;

            while(dupCount){
                --buf[s[begin]];
                if(buf[s[begin]] == 1)
                    --dupCount;
                ++begin;
            }

            cout<<begin<< " : "<<end<<endl;
            maxLen = max(maxLen, end - begin);
        }
        return maxLen;
    }
private:
    int buf[256] = {0};
};
