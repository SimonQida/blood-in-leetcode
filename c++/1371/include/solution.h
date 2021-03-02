#include<vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
class Solution {
public:
    int findTheLongestSubstring(string s) {
        str = s;
        vector<vector<short> > buf(s.size(), vector<short>(s.size(), 0));
        for(int i = 0; i < s.size(); ++i){
            buf[0].back() ^= (1 << switchChar(s[i]));
        }
        return fillSub(buf);
    }
    bool checkChar(short charStat){
        return (charStat & ~(1 << 5)) == 0;
    }

private:
    string str;

    int switchChar(char c){
        switch (c){
            case 'a':
                return 0;
            case 'e':
                return 1;
            case 'i':
                return 2;
            case 'o':
                return 3;
            case 'u':
                return 4;
            default:
                return 5;
        }
    }

    int fillSub(vector<vector<short> > buf){
        for(int index =0 ; index < str.size(); ++index){
// i = 0
            short& head = buf[0][str.size()-1-index] ;
            short& _head = buf[0][str.size()-index];
            if(index == 0)
                ;
            else {
                head = _head ^ (1<< switchChar(str[str.size()-index]));
            }
            if(checkChar(head))
                return str.size() - index;

            for(int i = 1; i <= index; ++i){
                short& tmp = buf[i][str.size()-index+i-1];
                short& _tmp = buf[i-1][str.size()-index+i-1];
                tmp = _tmp ^ (1<< switchChar(str[i-1]));
                if(checkChar(tmp)){
                    return str.size() - index;
                }
            }
        }
        return 0;
    }
};
