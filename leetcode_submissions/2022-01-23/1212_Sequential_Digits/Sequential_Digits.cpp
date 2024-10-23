class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> ans;
        int num=0,i=1;
        
        for(int j=1;j<9;j++) {
            
            num=j;i=num+1;
            
            while(num < high) {

                num = num*10+i;i++;
                
                if(num%10 == 0) break;

                if(num >=  low && num <= high) {
                    ans.push_back(num);
                }

            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};