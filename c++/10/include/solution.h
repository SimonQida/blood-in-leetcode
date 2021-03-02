#include<vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) { 
        return recursion(s, p);
        //return iteration(s, p);
    }

    bool iteration(const string& s, const string& p){

    }

    bool recursion(const string& s, const string& p){
        buf.assign(s.size()+1, vector<int> (p.size()+1, -1));
        buf[s.size()][p.size()] = 1;
        return match(s, p, 0, 0);
    }

    bool match(const string& s, const string& p, int sp, int pp){
        if(sp != s.size() && pp >= p.size())
            return false;
    
        if(buf[sp][pp] != -1)
            return buf[sp][pp];

        bool result = false;
        if(pp < p.size()-1 && p[pp+1] == '*'){
            if(sp == s.size() ||!(s[sp] == p[pp] || p[pp] == '.') )
                result =  match(s, p, sp, pp+2);
            else
                result =  match(s, p, sp+1, pp) || match(s, p, sp+1, pp +2) || match(s, p, sp, pp+2);
        }
        else if(sp != s.size() && (s[sp] == p[pp] || p[pp] == '.'))
            result = match(s, p, sp+1, pp+1);

        buf[sp][pp] = result;
        return result;
    }

    vector<vector<int> > buf;
};
