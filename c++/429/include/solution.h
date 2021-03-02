/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)
            return result;
        vector<int> lev1(1, root->val);
        vector<Node*> nextLine;

        nextLine.assign((root->children).begin(), (root->children).end());
        result.push_back(lev1);

        insertLevel(nextLine);
        return result;
    }

    void insertLevel(vector<Node*>& curLine){
        vector<Node*> nextLine;
        vector<int> levn;
        if(curLine.size() == 0)
            return;

        for(auto nptr : curLine){
            levn.push_back(nptr->val);
            for(Node* n: nptr->children)
                nextLine.push_back(n);
        }
        result.push_back(levn);
        insertLevel(nextLine);
    }

private:
    vector<vector<int>> result;

};
