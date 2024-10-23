class Solution {
public:
    int minNumberOfHours(int ie, int ix,vector<int>& en, vector<int>& ex) {
        
        int n=en.size();
        int val=0; //total hours needed
        for(int i=0;i<n;i++){
            if(en[i]>=ie){
                val+=en[i]-ie+1; // adding additional hours in energy
                ie+=en[i]-ie+1;
            }
            if(ex[i]>=ix){
                val+=ex[i]-ix+1; // adding additional hours in experience
                ix+=ex[i]-ix+1;
            }
            ie-=en[i];
            ix+=ex[i];
            
        }
        return val;
    }
};