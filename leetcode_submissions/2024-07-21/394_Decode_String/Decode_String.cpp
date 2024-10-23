class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> numStack;
        string currentStr = "";
        int currentNum = 0;
        
        for (char &c : s) {
            if (isdigit(c)) {
                currentNum = currentNum * 10 + (c - '0');
            } else if (c == '[') {
                numStack.push(currentNum);
                strStack.push(currentStr);
                currentNum = 0;
                currentStr = "";
            } else if (c == ']') {
                string temp = currentStr;
                currentStr = strStack.top(); 
                strStack.pop();
                int repeatTimes = numStack.top(); 
                numStack.pop();
                for (int i = 0; i < repeatTimes; ++i) {
                    currentStr += temp;
                }
            } else {
                currentStr += c;
            }
        }
        
        return currentStr;
    }
};
