class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        target = p;
        dealNode(root);
        return res;
    }

    void dealNode(TreeNode* node){
        if(node == NULL)
            return ;
        dealNode(node->left);
        if(istaking){
            istaking = false;
            cout<<"current node val is "<< node->val<<endl;
            res = node;
        }
        else{
            if(node == target)
                istaking = true;
        }
        cout<<node->val<<" ";
        dealNode(node->right);
    }


    TreeNode* target;
    bool istaking = false;
    TreeNode* res = NULL;
};
