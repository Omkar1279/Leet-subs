class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m= matrix.size();
        int n= matrix[0].size();
        int h= (m*n)-1,l=0;
        
        while(l<=h) {
            
            int mid = l + (h-l)/2;
            
            if(target == matrix[mid/n][mid%n]) return true;
            
            else if(matrix[mid/n][mid%n] < target) l=mid+1;
            
            else h=mid-1;
        }

        return false;
    }
};