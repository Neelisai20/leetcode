class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<int> a(26,INT_MAX);
        for(int i=0;i<words.size();i++)
        {   vector<int> ct(26,0);
            for(int j=0;j<words[i].size();j++)
            {
                ct[words[i][j]-'a']++;
            }
            for(int j=0;j<26;j++)
            {
                a[j]=min(a[j],ct[j]);
            }
        }
        vector <string> ans;
        for(int i=0;i<26;i++)
        {
            while(a[i]!=0)
            {
                 ans.push_back(string(1,'a'+i));
                 a[i]--;
            }
        }
        return ans;


}   
};