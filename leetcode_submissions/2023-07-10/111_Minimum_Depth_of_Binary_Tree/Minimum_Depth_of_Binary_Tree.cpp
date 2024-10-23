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
    int f(TreeNode* root) {

        if(!root) return 0;
        if(min(f(root->left),f(root->right))==0) return max(f(root->left),f(root->right))+1;
        return 1+min(f(root->left),f(root->right));
    }
public:
    int minDepth(TreeNode* root) {
        return f(root);
    }
};