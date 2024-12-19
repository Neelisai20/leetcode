class Solution {
public:
    int characterReplacement(string s, int k) {
         int n=s.length();
        int r=0,l=0;
        int maxlen=0;
        int maxi=0;
        unordered_map<char,int> mpp;
        // vector<int> hash(26,0);
        while(r<n)
        {
            mpp[s[r]]++;
            //hash[s[r]-'A']++;
            maxi=max(maxi,mpp[s[r]]);
            while((r-l+1)-maxi>k)
            {
               mpp[s[l]]--;
               if(mpp[s[l]]==0)
               {
                mpp.erase(s[l]);
               }
                maxi=0;
                auto it=mpp.begin();
                while(it!=mpp.end())
                {
                    maxi=max(maxi,it->second);
                    it++;
                }
                l++;
            }
            if((r-l+1)-maxi<=k)
            {
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};