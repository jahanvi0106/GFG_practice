/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void leftSide(Node *root, int lvl, vector<int>& v){
        if(root==NULL)
            return;
        if(v.size()==lvl)
            v.push_back(root->data);
        leftSide(root->left, lvl+1, v);
        leftSide(root->right, lvl+1, v);
    }
  
    vector<int> leftView(Node *root) {
        vector<int> ans;
        leftSide(root, 0, ans);
        return ans;
    }
};