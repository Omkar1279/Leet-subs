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
    int minDepth(TreeNode* root) {
        
        if (root==NULL)
            return 0;
        int ld=minDepth(root->left);
        int rd=minDepth(root->right);
        if(min(ld,rd)==0)
            return max(ld,rd)+1;
        return min(ld,rd) + 1;
    }
};