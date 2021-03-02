#include<unordered_map>

using namespace std;

class Solution {
    public:
        string minWindow(string s, string t) {
            for(char c: t){
                if(tpMap.count(c) ==0)
                    tpMap[c] = 1;
                else ++tpMap[c];
            }
            

            string res = "";
            int begin = 0, end = 0;
            int minSize = 100000;
            while(1){

                while(!isMatchT()){
                    //cout<<"end: "<<end<<endl;
                    // push s[end]
                    if(end >= s.size())
                        return res;
                    ++curMap[s[end++]];
                }

                while(isMatchT()){
                    //cout<<"begin : "<<begin<<endl;
                    --curMap[s[begin++]];
                }

                // check if current substring is the most short
                if(end - begin +1 < minSize){
                    minSize = end-begin+1;
                    res = s.substr(begin-1, end-begin+1);
                }
            }

        return res;
    }

private:
    bool isMatchT(){
        for(auto x = tpMap.begin(); x != tpMap.end(); ++x){
            //cout<<"isMatch : "<<x->first<< " "<< x->second<< ", curMap: "<<curMap[x->first]<<endl;
            if(x->second > curMap[x->first])
                return false;
        }

        return true;
    }
    int curMap[256] = {0};
    unordered_map<char, int> tpMap;
};
