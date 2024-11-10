class Solution {
public:
    string convert(string s, int numRows) {
    if(numRows==1||s.size()<numRows)
    {
        return s;
    }
      vector<vector<char>> ans(numRows);
      int n=s.size();
      int i=0,j=0;
      while(i<n)
      {
        
        while(j<numRows&&i<n)
        {
            ans[j].push_back(s[i]);
            j++;
            i++;
        }
        j=numRows-2;
        while(j>=0&&i<n)
        {
            ans[j].push_back(s[i]);
            j--;
            i++;
        }
        j=1;
      }
      string res="";
      for(auto it:ans)
      {
        for(auto x:it)
        {
            res+=x;
        }
      }
      return res;
    }
};