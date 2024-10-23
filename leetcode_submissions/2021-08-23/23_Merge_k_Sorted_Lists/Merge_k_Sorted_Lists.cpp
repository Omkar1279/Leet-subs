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
    
    void build (ListNode* &a,int x) {
        if(a==NULL){
            ListNode* temp = new ListNode(x);
            a=temp;
            return;
        }
        else{
            ListNode* temp = new ListNode(x);
            temp->next=a;
            a=temp;
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
           int x;ListNode* ans=NULL;
           priority_queue<int>pq;
           
           for(int i=0;i<lists.size();i++) {
               
               ListNode* curr=lists[i];
               while(curr!=NULL) {
                   pq.push(curr->val);
                   cout<<pq.top();
                   curr=curr->next;
               }
           }
           
           while(!pq.empty()) {
               x=pq.top();
               build(ans,x);
            }
           
        return ans; 
        
    }
};