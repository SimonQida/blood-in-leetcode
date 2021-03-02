class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        findAnc(root, p, q);
        return res;
    }

    bool findAnc(TreeNode* node, TreeNode* p, TreeNode* q){
        if(!node)
            return 0;

        TreeNode* l = findAnc(node->left, p, q), r = findAnc(node->right, p, q);

        if(node == p || node == q){
            if(l || r){
                res = node;
            }
            else
                return true;
        }

        if(l || r){
            if(l && r)
                res = node;
            return true;
        }

        return false;
    }

    TreeNode* res;
};
