#include<vector>
using std::vector;

class Solution {
public:
    int count;
    int target;
    void dealNode(TreeNode* node, vector<int> buf){
        if(!node)
            return;
        for(int i = 0; i < buf.size(); ++i){
            buf[i] += node->val;
            if(buf[i] == target)
                ++count;
        }
        buf.push_back(node->val);
        if(node->val == target)
            ++count;
        dealNode(node->left, buf);
        dealNode(node->right, buf);
    }

    int pathSum(TreeNode* root, int sum) {
        target = sum;
        dealNode(root, vector<int>());
        return count;
    }
};
