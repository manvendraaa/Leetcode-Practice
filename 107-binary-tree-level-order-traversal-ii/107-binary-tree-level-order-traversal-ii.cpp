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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > ans;
        
        if(root == NULL )return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> a;
        while(q.size()>1){
            TreeNode* curr = q.front();
            q.pop();
            if(curr == NULL){
                ans.push_back(a);
                a.clear();
                q.push(NULL);
                continue;
            }
            a.push_back(curr->val);
            
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            
        }
        ans.push_back(a);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};