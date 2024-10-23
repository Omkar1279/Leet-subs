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
    void dfs(TreeNode* p,vector<int> &t) {
        
        stack<pair<TreeNode*,int>>s;
        
        s.push({p,0});
        
        while(!s.empty()) {
            
            TreeNode* cur = s.top().first;
            int c = s.top().second;
            s.pop();
            
            if(cur == nullptr) t.push_back(-1);
            
            if(cur == NULL || c >= 3) continue;
            
            s.push({cur,c+1});
            
            if(c == 0) t.push_back(cur->val);
            else if( c== 1) s.push({cur->left,0});
            else if( c== 2) s.push({cur->right,0});
            
        }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p && !q) return 0;
        else if(!p && q) return 0;
        else if(!p && !q) return 1;
        
        vector<int> s;
        vector<int> t;
        dfs(p,s);
        dfs(q,t);
        
        if(s != t) return 0;
        
        else return 1;
        
    }
};