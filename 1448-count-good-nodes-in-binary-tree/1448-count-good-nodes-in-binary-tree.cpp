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
    
    int help(TreeNode* root, int maxi){
        
        if(!root)return 0;
        int a = 0;
        if(root->val >= maxi){
            a = 1;
            maxi = root->val;
        }
        
        return a + help(root->right,maxi) + help(root->left,maxi);
        
        
    }
    
    
    int goodNodes(TreeNode* root) {
        
        
        return help(root,root->val);
    }
};