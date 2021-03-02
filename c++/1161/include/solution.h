#include<iostream>
#include<queue>
using namespace std;

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int index =0;
        int res =1;
        bool needMore = false;
        TreeNode endNode(-100005);
        if(root != NULL){
            needMore = true;
            treeQ.push(root);
            treeQ.push(&endNode);
        }

        int tmp =0;
        TreeNode* cur;
        while(needMore){
            ++index;
            bool hasValueNode = false;
            tmp =0;
            for(;;){
                cur = treeQ.front();
                treeQ.pop();
                if(cur != NULL){
                    if(cur->val == -100005){
                        //it's end node
                        if(treeQ.size() ==0)
                            needMore = false;
                        treeQ.push(&endNode);
                        break;
                    }

                    tmp += cur->val;
                    if(cur->left)
                        treeQ.push(cur->left);
                    if(cur->right)
                        treeQ.push(cur->right);
                    if(cur->left || cur->right)
                        hasValueNode = true;
                }
            }

            if(tmp > tmpMax){
                res =index;
                tmpMax = tmp;
            }
        }

        return res;
    }

private:
    queue<TreeNode*> treeQ;
    int tmpMax =-100001;
};
