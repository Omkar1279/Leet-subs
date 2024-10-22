class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        int ans=0,f=0,s=0;
        
        priority_queue<int> pq(amount.begin(),amount.end());
        
        while(pq.top() >0) {
            f=pq.top();pq.pop();
            
            s=pq.top();pq.pop();
            
            if(f>0 && s>0) {
                f--;s--;
            }
            else f--;
            
            pq.push(f);pq.push(s);ans++;
        }
        return ans;
    }
};