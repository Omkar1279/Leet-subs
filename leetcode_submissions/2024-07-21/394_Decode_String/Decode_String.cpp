class Solution {
public:
    string decodeString(string s) {
        int index = 0;
        return decodeHelper(s, index);
    }

private:
    string decodeHelper(const string& s, int& index) {
        string result = "";
        int num = 0;

        while (index < s.length()) {
            char c = s[index];

            if (isdigit(c)) {
                // Build the number for the repeat count
                num = num * 10 + (c - '0');
                index++;
            } else if (c == '[') {
                // Move past '[' and decode the substring recursively
                string nested = decodeHelper(s, ++index);
                for (int i = 0; i < num; ++i) {
                    result += nested;
                }
                num = 0; // Reset the number after using it
            } else if (c == ']') {
                // End of the current recursive call
                index++;
                return result;
            } else {
                // Normal character, just add it to the result
                result += c;
                index++;
            }
        }

        return result;
    }
};
