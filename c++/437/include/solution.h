#include<unordered_map>
using std::unordered_map;

class Solution {
public:
    int count;
    unordered_map<int, int> trace;
    void dealNode(TreeNode* node, int add, int sum){
        if(!node)
            return;
        node->val += add;
        count += trace[node->val - sum];
        ++trace[node->val];
        dealNode(node->left, node->val, sum);
        dealNode(node->right, node->val, sum);
        --trace[node->val];
    }

    int pathSum(TreeNode* root, int sum) {
        trace[0] = 1;
        dealNode(root, 0, sum);
        return count;
    }
};
