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
    vector<string> ans;
    void path(TreeNode* root, string curr){
        if(root==NULL)return;
        if(curr == ""){
            curr = to_string(root->val);
        }
        else
            curr = curr+"->"+to_string(root->val);
        if(root->right== NULL && root->left==NULL){
            ans.push_back(curr);
            return;
        }
        path(root->left,curr);
        path(root->right,curr);
        
    }
    
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        path(root,"");
        return ans;
    }
};