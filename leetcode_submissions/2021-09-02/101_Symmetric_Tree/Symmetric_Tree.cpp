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
    
    void rdfs(TreeNode* t,vector<int> &v) {
        
        if(!t) return;
        
        dfs(t->right,v);
        v.push_back(t->val);
        dfs(t->left,v);
    }
    
    void dfs(TreeNode* t,vector<int> &v) {
        
        if(!t) return;
        
        dfs(t->left,v);
        v.push_back(t->val);
        dfs(t->right,v);
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(!root->left && !root->right) return 1;
        
        vector<int> v,s;
        rdfs(root->left,v);
        dfs(root->right,s);
        
        if(v == s)return 1;
        
        else return 0;
    }
};