#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        _prices = prices;
        //return _recursion(0, k);
        _iterator(k);
    }

    int _iterator(int kMax){
        const int MIN = -100000;
        int pSize = _prices.size();
        vector<vector<vector<int> > > d(pSize +1, vector<vector<int> >(kMax+1, vector<int>(2,0)));
        for(int k =0; k <= kMax; ++k){
            // with begin in 0, no bussiness done, so no money
            d[0][k][0] = 0;
            // with begin in 0, no bussiness can buy, so it's -INFINITY 
            d[0][k][1] = MIN;
        }

        for(int i =1; i <= pSize; ++i){
            // with zero buy-opportunity so it's zero money
            d[i][0][0] = 0;
            // ...
            d[i][0][1] = MIN;
        }

        for(int begin = 1; begin <= pSize; ++begin){
            for(int k = 1; k <= kMax; ++k){
                d[begin][k][0] = max(d[begin-1][k][0], d[begin-1][k][1] + _prices[begin-1]);
                d[begin][k][1] = max(d[begin-1][k][1], d[begin-1][k-1][0] - _prices[begin-1]);
            }
        }
        int res = d[pSize][kMax][0];
        return d[pSize][kMax][0];
    }

    int _recursion(int index, int K){
        int res = 0;
        if (K <= 0)
            return 0;
        if(index >= _prices.size())
            return 0;
        int buyMin = _prices[index];
        for(int sell = index+1; sell < _prices.size(); ++sell){
            buyMin = buyMin > _prices[sell] ? _prices[sell] : buyMin;
            res = max(res, _recursion(sell+1, K-1) + _prices[sell] - buyMin);
        }

        return res;
    }

private:
    vector<int> _prices;
};
