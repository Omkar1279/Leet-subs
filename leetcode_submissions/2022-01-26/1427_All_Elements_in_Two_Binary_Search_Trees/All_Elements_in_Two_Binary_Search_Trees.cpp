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
    
    void help(TreeNode* root, vector<int> &v) {
        if(!root) return;
        
        help(root->left,v);
        
        v.push_back(root->val);
        
        help(root->right,v);
        
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int>v;
        help(root1 , v);
        help(root2 , v);
        
        sort(v.begin() , v.end());
        
        return v;
        
    }
};