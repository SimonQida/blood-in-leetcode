#include<vector>
using namespace std;

class Solution {
public:
    vector<string> permutation(string s) {
        iterNext("", s);
        return res;
    }

    void iterNext(const string& prefix, const string& left){
        if(left.size() == 0){
            res.push_back(prefix);
            return;
        }

        string tmp;
        for(int i = 0; i < left.size(); ++i){
            size_t pos = left.find(left[i]);
            if(pos < i)
                continue;
            tmp = left;
            tmp.erase(i, 1);
            iterNext(prefix + left[i], tmp);
        }

    }

    vector<string> res;
};
