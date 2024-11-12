class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty()) return "";

        
        int mini = INT_MAX;
        for (const auto& str : strs) {
            mini = min(mini, (int)str.size());
        }

        string res = "";
        
       
        for (int i = 0; i < mini; i++) {
            char currentChar = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != currentChar) {
                    return res;  
                }
            }
            res += currentChar;  
        }
        
        return res;
    }
};

