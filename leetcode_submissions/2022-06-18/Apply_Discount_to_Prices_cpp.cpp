class Solution {
public:
    string help(string temp,int d) {
        int num=stoi(temp);
        
        double x=(double)(100 - d) / 100.0;
        x=x*num;
        
        stringstream ss2;
        ss2 << fixed << setprecision(2) << (x);
        
        return ss2.str();
    }
    
    string discountPrices(string sen, int discount) {
        
        int n=sen.size();string ans;string temp;
        
        int i=0;
        for(i=0;i<n;i++) {
            int flag=1;temp.clear();
            if(sen[i] == '$' && (i==0 || sen[i-1] == ' ')) {

                if(i+1<n) {
                    int j=i+1;

                    while(sen[j]!=' ' && j<n) {

                        if(!isdigit(sen[j])) {flag=0;break;}
                        temp+=sen[j];j++;
                    }
                    if(flag) {
                        temp=help(temp,discount);
                        ans+='$'+temp;
                        i=j;
                    }
                }
            }
            ans+=sen[i];
        }
        return ans;
    }
};