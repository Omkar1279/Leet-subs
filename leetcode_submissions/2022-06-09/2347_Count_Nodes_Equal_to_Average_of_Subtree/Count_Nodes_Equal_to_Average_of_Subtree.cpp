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
    int subtreeavg(TreeNode *root) {
        
        queue<TreeNode*> q;
        int sum=0,cnt=0;
        
        q.push(root);
        
        while(!q.empty()) {
            
            TreeNode *temp=q.front();
            cnt++;sum+=temp->val;
            q.pop();
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        return sum/cnt;
    }
    
    int averageOfSubtree(TreeNode* root) {
        
        queue<TreeNode*> q;
        int ans=0;
        
        q.push(root);
        
        while(!q.empty()) {
            
            TreeNode *temp=q.front();
            if(temp->val==subtreeavg(temp)) ans++;
            q.pop();
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        return ans;
    }
};