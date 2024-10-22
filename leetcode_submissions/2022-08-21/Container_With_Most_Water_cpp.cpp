class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l=0,n=height.size()-1 ,ans=INT_MIN;
        
        while(l<n) {
            ans=max(ans,(n-l)*min(height[l],height[n]));
            
            if(height[l]>height[n]) n--;
            else l++;
        }
        

        return ans;
    }
};