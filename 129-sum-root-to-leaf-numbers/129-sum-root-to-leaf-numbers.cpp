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
    
    int sum(TreeNode* root, int num)
    {
        num = num*10 + root->val;
        if(root->left == NULL && root->right == NULL){
            return num;
        }
        
        
        int a = 0,b = 0;
        if(root->left)a = sum(root->left,num);
        if(root->right)b = sum(root->right,num);
        
        return a + b;
        
    }
    
    
    
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        
        
        return sum(root,0);
        
        
    }
};