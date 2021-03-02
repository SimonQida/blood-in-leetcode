#include<set>

using namespace std;
using pairArr = vector<pair<set<int>, set<int>>>;

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        for(auto itr = stones.begin(); itr != stones.end(); ++itr){
            vector<pairArr::iterator> rebuildArr;
            int x = itr->at(0);
            int y = itr->at(1);
            for(auto sitr = tog.begin(); sitr != tog.end(); ++sitr){
                set<int>& xSet = sitr->first;
                set<int>& ySet = sitr->second;
                
                //cout<<"xSet, ySet "<<xSet.size()<<" "<<ySet.size()<<endl;
                // match this set, so insert the x,y to it, and target this pair
                // in convience of reBuildArr
                if(xSet.find(x) != xSet.end() || ySet.find(y) != ySet.end()){
                    xSet.insert(x); ySet.insert(y);
                    rebuildArr.push_back(sitr);
                }
            }

            // new pair of set, construct it and insert into tog
            if (rebuildArr.size() == 0){
                //cout<<"insert to tog "<<x<<" "<<y<<endl;
                tog.push_back({ {x}, {y} });
            }
            // merge if more than one set-pair cross
            else if(rebuildArr.size() > 1){
                reConSet(rebuildArr);
            }
        }
        return stones.size() - tog.size();
    }
private:
    void reConSet(const vector<pairArr::iterator>& itrArr){
        const pairArr::iterator& reConRes = itrArr[0];
        for(auto itr = itrArr.begin()+1; itr != itrArr.end(); ++itr){
            reConRes->first.insert((*itr)->first.begin(), (*itr)->first.end());
            reConRes->second.insert((*itr)->second.begin(), (*itr)->second.end());
            tog.erase(*itr);
        }
    }

    pairArr tog;
};
