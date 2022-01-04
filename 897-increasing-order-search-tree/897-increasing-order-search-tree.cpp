/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> in;
    void inorder(TreeNode* root){
        if(root==NULL)return;
        inorder(root->left);
        in.push_back(root->val);
        inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root == NULL)return root;
        
        inorder(root);
        
        TreeNode* nn = new TreeNode(in[0]);
        TreeNode* it = nn;
        for(int i = 1;i<in.size();i++){
            it->right = new TreeNode(in[i]);
            it = it->right;
        }
        return nn;
        
    }
};