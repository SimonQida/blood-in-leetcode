#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        middle = inorder;
        latter = postorder;

        int latterIndex = latter.size()-1;
        return buildNode(0, middle.size()-1, latterIndex);
    }

    int findV(int x){
        for(int i=0; i < middle.size(); ++i){
            if(middle[i] == x)
                return i;
        }
        return -1;
    }

    TreeNode* buildNode(int middleBegin, int middleEnd, int& latterEnd){
        if(middleBegin > middleEnd)
            return NULL;

        int rootVal = latter[latterEnd--];
        TreeNode* node = new TreeNode(rootVal);

        node->right = buildNode(findV(rootVal)+1, middleEnd, latterEnd);
        node->left = buildNode(middleBegin, findV(rootVal)-1, latterEnd);
        cout<<"set current root node: "<<rootVal;
        cout<<" left: "<<node->left<<" right: "<<node->right<<endl;
        return node;
    }


    vector<int> middle, latter;
};
