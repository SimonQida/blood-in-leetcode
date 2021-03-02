#include<set>

using std::set;
using std::vector;
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> buf;
        for(int i : candies){
            buf.insert(i);
        }
        return buf.size() > candies.size()/2 ? candies.size()/2 : buf.size();
    }
};
