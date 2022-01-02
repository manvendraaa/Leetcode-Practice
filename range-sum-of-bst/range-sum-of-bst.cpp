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
    int sum = 0;
    void range(TreeNode* root, int low, int high){
        if(!root)return;
        
        if(root->val > high){
            // call the left only
            range(root->left,low,high);
        }
        else if(root->val < low){
            // iske left me or chote hi honge so go only right
            range(root->right,low,high);
        }
        else{
            // ab iska matlab yehi hai ki dono ki range me hai to add to ans and also call on both sides
            sum += root->val;
            range(root->left,low,high);
            range(root->right,low,high);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        range(root,low,high);
        
        return sum;
    }
};