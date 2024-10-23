class Solution {
public:
    vector<int> countBits(int n) {
        
        queue<int>q;vector<int>v(n+1);
        
        v[0]=0;
        
        if(n==0) return v;
        
        v[1]=1;
        
        if(n==1) return v;
        
        q.push(0);q.push(1);
        
        for(int i=2;i<=n;i++) {
            
            if(i%2 == 0) {
                q.pop();
                v[i]=q.front();
                q.push(v[i]);
                continue;
            } 
            else {
                v[i]=q.front()+1;
                q.push(v[i]);
            }  
        }
        return v;
    }
};