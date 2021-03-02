#include<set>
#include <unordered_map> 

using namespace std;
//using storeArr = vector<int>;
using storeArr = unordered_map<int, int>;

// consider a point {x, y}, we map y to y+10001, so we making x and y, these two factors clear
// and we build this unionSet, collecting all point's message and merge. so we can make x an y together

class Solution {
public:
    Solution():father(){}

    int removeStones(vector<vector<int>>& stones) {

        for(auto itr = stones.begin(); itr != stones.end(); ++itr){
            int x = itr->at(0);
            int y = itr->at(1) + 10001;
            if(father.count(x) == 0)
                father[x] = x;
            if(father.count(y) == 0)
                father[y] = y;
            
            merge(x, y);
        }

        return stones.size() - findAllHead();
    }

private:
    int findAllHead(){
        int count = 0;
        for (storeArr::iterator itr = father.begin(); itr != father.end(); ++itr){
            if (itr->first == itr->second) {
                ++count; 
            }
        }

        return count;
    }

    int find(int pos){
        if (father[pos] != pos)
            father[pos] = find(father[pos]);

        return father[pos];
    }

    void merge(int pos1, int pos2){
        pos1 = find(pos1);
        pos2 = find(pos2);
        father[pos1] = pos2;
    }

    storeArr father;
};
