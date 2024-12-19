class Solution {
public:
    int characterReplacement(string s, int k) {
         int n=s.length();
        int r=0,l=0;
        int maxlen=0;
        int maxi=0;
        vector<int> hash(26,0);
        while(r<n)
        {
            hash[s[r]-'A']++;
            maxi=max(maxi,hash[s[r]-'A']);
            while((r-l+1)-maxi>k)
            {
                hash[s[l]-'A']--;
                maxi=0;
                for(int i=0;i<26;i++)
                {
                    maxi=max(maxi,hash[i]);
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