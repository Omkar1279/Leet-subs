class Solution{
public:
    string longestPalindrome(string& s)
    {
        int n = s.length();
        int maxlen = 1, left = 0;
        
        if(n == 1)
            return string(1, s[0]);
        
        int DP[n][n];
        
        for(int i = 0; i < n; i++)
        {
            DP[i][i] = true;
            
            for(int j = 0; j < i; j++)
            {
                if(s[i] == s[j] && (i - j < 2 || DP[j + 1 ][i - 1]) )// ( i - j < 2) means if two values are adjacent
                                                                    //DP[j + 1 ][i - 1] means check values from i to j whether is a palindromic or not. 
                    DP[j][i] = true;
                else
                    DP[j][i] = false;
                
                if(DP[j][i] && i - j + 1 > maxlen)
                {
                    maxlen = i - j + 1;
                    left = j;
                }
            }
        }
        
        return s.substr(left, maxlen);
    }
};