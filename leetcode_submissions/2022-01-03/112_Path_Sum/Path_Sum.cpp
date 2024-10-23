/*   
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
    bool ans=0;
    
    void dfs(TreeNode* root, int t, int sum) {
        
        if(root==NULL) { 
            
            if(t==sum) {
                ans=1;
            }
            return;    
        }
        
        sum+=root->val;
        
        dfs(root->left,t,sum);
        dfs(root->right,t,sum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL) return 0;
        
        dfs(root,targetSum,0);
        
        return ans;
        
    }
};