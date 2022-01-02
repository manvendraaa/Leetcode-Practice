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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        if(root->right == NULL && root->left == NULL){
            return 1;
        }
        
        
        
        int r = INT_MAX;
        if(root->right)r = minDepth(root->right);
        int l = INT_MAX;
        if(root->left)l = minDepth(root->left);
        return min(r,l) + 1; 
    }
};