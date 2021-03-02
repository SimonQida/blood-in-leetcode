class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return findAnc(root, p, q);
    }

    TreeNode* findAnc(TreeNode* cur, TreeNode* p, TreeNode* q){
        if(!cur)
            return cur;

        if((cur->val - p->val) * (cur->val - q->val) > 0){
            if(cur->val > p->val)
                return findAnc(cur->left, p, q);
            else
                return findAnc(cur->right, p, q);
        }
        else{
            return cur;
        }
    }
};
