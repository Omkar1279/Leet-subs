class Solution {
public:
    int largestInteger(int num) {
        
        string s=to_string(num);
        int n=s.length(),flag=0;
        
        for(int i=0;i<n;i++) {
            
            if((int)s[i]%2==0) flag=1;
            else flag=0;
            
            for(int j=i+1;j<n;j++) {
                
                if(flag) {
                    
                    if((int)s[j]%2==0 && (int)s[j] > (int)s[i]) swap(s[j],s[i]);
                }
                else {
                    if((int)s[j]%2==1 && (int)s[j] > (int)s[i]) swap(s[j],s[i]);
                }
                
            }
        }
        return stoi(s);
    }
};