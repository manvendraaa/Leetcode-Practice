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
    bool valid(TreeNode* root,TreeNode* minNode, TreeNode* maxNode){
        if(root == NULL)return true;
        if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)return false;
        
        return valid(root->right,root,maxNode) && valid(root->left,minNode,root);
        
        
        // return root->val < r && root->val > l && root->right?(root->right->val > root->val):true && root->left?(root->left->val < root->val):true && valid(root->right,root->val,r) && valid(root->left,l,root->val);
        
    }
    bool isValidBST(TreeNode* root) {
        // write the inorder traversal and see if that is sorted or not
        return valid(root,NULL,NULL);
    }
};