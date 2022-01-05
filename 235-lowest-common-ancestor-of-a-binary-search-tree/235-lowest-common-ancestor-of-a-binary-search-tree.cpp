/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return root;
        TreeNode* a = p->val<q->val?p:q;
        TreeNode* b = p->val>q->val?p:q;
        
        if(root->val >= a->val && root->val <= b->val)return root;
        
        if(root->val < a->val)return lowestCommonAncestor(root->right,p,q);
        if(root->val > b->val)return lowestCommonAncestor(root->left,p,q);
        
        return root;
    }
};