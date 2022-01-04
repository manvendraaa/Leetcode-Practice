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
    int maxLevelSum(TreeNode* root) {
        // bfs with storing the sum of each row and comparing to the maximum
        
        queue<TreeNode*> q;
        q.push(root);
        int currlevel = 0;
        int maxsum = root->val;
        int currsum = 0;
        pair<int,int> ans;
        ans = {root->val,1};
        while(!q.empty()){
            int count = q.size();
            currsum = 0;
            currlevel++;
            for(int i = 0;i<count;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                
                currsum += curr->val;
            }
            if(currsum > ans.first){
                ans = {currsum,currlevel};
            }
            
            
            
        }
        
        return ans.second;
        
        
    }
};