#include<queue>

using namespace std;

struct node{
    int i, j, payment, rightPayment, downPayment, leftPayment, upPayment;
};

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const node& lhs, const node&rhs) const
  {
    if (reverse) return (lhs.payment<rhs.payment);
    else return (lhs.payment>rhs.payment);
  }
};


class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int rowSize = heights.size();
        int colSize = heights[0].size();
        vector<vector<node> >nodeMap (rowSize, vector<node>(colSize, {0, 0, -1, -1, -1, -1, -1}));
        nodeMap[0][0].payment = 0;
        for(int i = 0; i < rowSize; ++i){
            for(int j =0; j < colSize; ++j){
                if(j < colSize-1)
                    nodeMap[i][j].rightPayment = abs(heights[i][j+1] - heights[i][j]);

                if(j != 0)
                    nodeMap[i][j].leftPayment = abs(heights[i][j] - heights[i][j-1]);

                if(i != 0)
                    nodeMap[i][j].upPayment = abs(heights[i][j] - heights[i-1][j]);

                if(i < rowSize -1)
                    nodeMap[i][j].downPayment = abs(heights[i+1][j] - heights[i][j]);
                nodeMap[i][j].i = i;
                nodeMap[i][j].j = j;

            }
        }

        lessTop.push(nodeMap[0][0]);
        int& resultPay = nodeMap[rowSize-1][colSize-1].payment;
        while(!lessTop.empty() && !(resultPay != -1 && resultPay <= lessTop.top().payment)){
            node curNode = lessTop.top();
            lessTop.pop();

            cout<<curNode.payment<<" resultPay: "<<resultPay<<endl;;
            //update curNode 

            int curRow = curNode.i;
            int curCol = curNode.j;
            if(curNode.rightPayment != -1)
                updateNode(nodeMap[curRow][curCol+1], max(curNode.payment, curNode.rightPayment));

            if(curNode.downPayment != -1)
                updateNode(nodeMap[curRow+1][curCol], max(curNode.payment, curNode.downPayment));

            if(curNode.upPayment != -1)
                updateNode(nodeMap[curRow-1][curCol], max(curNode.payment, curNode.upPayment));

            if(curNode.leftPayment != -1)
                updateNode(nodeMap[curRow][curCol-1], max(curNode.payment, curNode.leftPayment));
        }

        return resultPay;
    }

    void updateNode(node& n, int value){
        int& tmpValue = n.payment;
        if(tmpValue == -1 || tmpValue > value){
            tmpValue = value;
            lessTop.push(n);
        }
    }

private:
    priority_queue<node, std::vector<node>, mycomparison> lessTop;
};
