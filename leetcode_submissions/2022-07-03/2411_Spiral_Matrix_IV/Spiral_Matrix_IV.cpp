/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    void solve(ListNode* head,vector<vector<int>> &ans) {
        
        int r=ans.size();
        int c=ans[0].size();
        int top=0,bottom=r-1,left=0,right=c-1;

        
        while(top<=bottom && left<=right) {
            
            for(int i=left;i<=right;i++) {
                if(!head) return;
                ans[top][i]=head->val;
                head=head->next;
            }
            top++;
            
            for(int j=top;j<=bottom;j++) {
                if(!head) return;
                ans[j][right]=head->val;
                head=head->next;
            }
            right--;
            
            if(top<=bottom) {
                for(int i=right;i>=left;i--) {
                    if(!head) return;
                    ans[bottom][i]=head->val;
                    head=head->next;
                }
                bottom--;
            }

            if(left<=right) {
                for(int i=bottom;i>=top;i--) {
                    if(!head) return;
                    ans[i][left]=head->val;
                    head=head->next;
                }
                left++;
            }
        }
    }
    
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>> vec( m , vector<int> (n, -1));
        solve(head,vec);
        
        return vec;
    }
};