#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex){
        ++rowIndex;
        if(rowIndex == 1)
            return vector<int> {1};
        if(rowIndex == 2)
            return vector<int> {1, 1};
        vector<int> result (rowIndex, 1);
        int inNum = (rowIndex +1) / 2;
        for(int i =0; i < rowIndex; ++i){
            for(int j =i; j >= 0; --j){
                if(j ==0 || j == i)
                    result[j] = 1;
                else{
                    result[j] += result[j-1];
                }
            }
        }
        return result;

    }
};
