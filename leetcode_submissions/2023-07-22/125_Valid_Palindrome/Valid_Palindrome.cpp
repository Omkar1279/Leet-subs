class Solution {
public:
    bool isPalindrome(string s) {
        int toright = 0;
        int toleft = s.size() - 1;
        if (s.empty()) return true;
        while (toright < toleft) {
            if (isalnum(s[toright]) && isalnum(s[toleft]) && tolower(s[toright]) != tolower(s[toleft])) {
                return false;
            } else if (!isalnum(s[toright])){
                toright++;
            } else if (!isalnum(s[toleft])){
                toleft--;
            } else {
                toright++;
                toleft--;
            }
        }
        return true;
    }
};