class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        int del=0;
        for(auto it:mpp)
        {
            int a=it.second;
            if(a%2==0)
            {
                del+=a-2;
            }
            else
            {
                del+=a-1;
            }
        }
        return s.size()-del;
    }
};