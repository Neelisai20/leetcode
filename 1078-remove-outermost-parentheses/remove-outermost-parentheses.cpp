class Solution {
public:
    string removeOuterParentheses(string s) {
        
       int ct = 0;  
        string str = "";  

        for (char c : s) {
            if (c == '(') {
                if (ct > 0) {  
                    str += c;
                }
                ct++;
            } else if (c == ')') {
                ct--;
                if (ct > 0) {  
                    str += c;
                }
            }
        }
        return str;
    }
};