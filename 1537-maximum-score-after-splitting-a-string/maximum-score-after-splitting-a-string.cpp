class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        vector<int> z(n,0);
        vector<int> o(n,0);
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
              ct++;
            z[i]=ct;      
        }
        ct=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
              ct++;
            o[i]=ct;      
        }
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
             maxi=max(maxi,z[i]+o[i+1]);
        }
        return maxi;

    }
};