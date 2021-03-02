#include<vector>
using std::vector;

class Solution {
public:
    typedef vector<double> dataBlock;
    typedef vector<dataBlock> dataAll;
    bool judgePoint24(vector<int>& nums) {
        dataAll data;
        for(int x: nums){
            data.push_back(dataBlock(1,(double)x));
        }
        levelDown(data);
        return output;
    }

private:
    bool output {false};
    void levelDown(dataAll data){
        if(data.size() == 1){
            for(double x : data[0]){
                double res = x-24;
                if(res < 0.01 && res > -0.01){
                    std::cout<<res<<" ";
                    output = true;
                }
            }
            return;
        }
        else{
            for(int i = 0; i <data.size(); ++i)
                for(int j = 0; j < data.size(); ++j){
                    if(j == i) continue;
                    dataAll cv;
                    for(int k =0; k < data.size(); ++k){
                        if( k == i || k == j)
                            continue;
                        cv.push_back(data[k]);
                    }
                    dataBlock curRes;
                    cal(curRes, data[i], data[j]);
                    cv.push_back(curRes);
                    levelDown(cv);
                }
        }
    }

    void cal(dataBlock& result, dataBlock v1, dataBlock v2){
        for(int i =0; i < v1.size(); ++i)
            for(int j = 0; j < v2.size(); ++j){
                result.push_back(v1[i] + v2[j]);
                result.push_back(v1[i] - v2[j]);
                result.push_back(v1[i] * v2[j]);
                if(v2[j] != 0)
                    result.push_back(v1[i] / v2[j]);
            }
    }
    
};
