#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        _prices = prices;
        return _recursion(0, 2);
        //_iterator();
    }

    //int _iterator(int )
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
