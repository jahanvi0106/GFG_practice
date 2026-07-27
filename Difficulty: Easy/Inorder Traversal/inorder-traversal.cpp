/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    void in(vector<int>& v, Node* root){
        if(root==NULL)
            return;
        else{
            in(v,root->left);
            v.push_back(root->data);
            in(v,root->right);
        }
    }
    
    
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        in(ans, root);
        return ans;
    }
};