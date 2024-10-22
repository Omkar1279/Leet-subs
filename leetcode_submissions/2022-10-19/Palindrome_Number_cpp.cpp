class Solution {
public:
    bool isPalindrome(int x) {
        string no_x = to_string(x);  //convert int x to string.
        int s = no_x.length();          //s is the size of the string.
        
        if (x<0)
        {
            return false;
        }
        else
        {
            int count=0;
            
            for (int j=0; j<s/2; j++)              // the loop will continue s/2 times;
            {
                if(no_x[j]==no_x[s-1-j])     //e.g. see if in "2343", s[0]==s[3]? string[1] ==string[2].
                {
                    count=count+1;    
                }
            }
            if (count==s/2)          
            {
                return true;
            }
        }
        return false;
    }
};