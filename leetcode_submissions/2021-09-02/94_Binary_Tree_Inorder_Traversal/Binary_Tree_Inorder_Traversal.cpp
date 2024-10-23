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
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL) return;
        
        vector<int>v;
        stack<pair<TreeNode*,int>>s;
        
        s.push({root,0});
        
        while(!s.empty()) {
            
            TreeNode* curr = s.top().first;
            int cnt = s.top().second;
            s.pop();
            
            if(curr == NULL || cnt >=3) continue;
            
            s.push({cur, cnt+1});
            
            if(cnt==0) s.push({curr->left,0});
            else if(cnt==1) v.push_back(curr->val);
            else if(cnt==2) s.push({curr->right,0});
        }

        
        return v;
    }
};