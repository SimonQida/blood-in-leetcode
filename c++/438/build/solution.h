using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int charCount = 0;
        for(char c: s1){
            ++dict[c];
        }
        for(int i =0; i< 256; ++i){
            if(dict[i] > 0)
                ++charCount;
        }

        bool isProcessing = false;
        int validChar = 0, begin = 0, end =0;
        int tmp[256];
        memcpy(tmp, dict, 256 * sizeof(int));

        while(end < s2.size()){
            if(dict[s2[end]] > 0){
                --tmp[s2[end]];
                if(tmp[s2[end]] == 0)
                    ++validChar;
                else if(tmp[s2[end]] == -1)
                    --validChar;
            }
            while(end - begin +1 > s1.size()){
                if(dict[s2[begin]] != 0){
                    ++tmp[s2[begin]];
                    if(tmp[s2[begin]] == 0)
                        ++validChar;
                    if(tmp[s2[begin]] == 1)
                        --validChar;
                }
                ++begin;
            }

            if(validChar == charCount)
                return true;

            ++end;
            //cout<<"begin; end "<<begin<<" "<<end;
            //cout<<" valid Char : "<<validChar<<endl;
        }

        return false;
    }

private:
    int dict[256] = {0};
};
