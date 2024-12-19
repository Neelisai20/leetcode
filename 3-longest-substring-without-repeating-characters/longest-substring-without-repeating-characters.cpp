class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map <int,int> mpp;
        int n=s.length();
        int l=0,r=0;
        int maxi=0;
        int ct=0;
        while(r<n)
        {
            mpp[s[r]]++;
            ct++;
            while(mpp.size()<ct)
            {
                mpp[s[l]]--;
                ct--;
                if(mpp[s[l]]==0)
                  mpp.erase(s[l]);
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};