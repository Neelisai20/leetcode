// class Solution {
// public:
//     int maxScore(string s) {
//         int n=s.length();
//         vector<int> z(n,0);
//         vector<int> o(n,0);
//         int ct=0;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='0')
//               ct++;
//             z[i]=ct;      
//         }
//         ct=0;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(s[i]=='1')
//               ct++;
//             o[i]=ct;      
//         }
//         int maxi=INT_MIN;
//         for(int i=0;i<n-1;i++)
//         {
//              maxi=max(maxi,z[i]+o[i+1]);
//         }
//         return maxi;

//     }
// };

class Solution {
public:
    int maxScore(string s) {
        int ones = count(s.begin(), s.end(), '1');
        
        int ans = 0;
        int zeros = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1') {
                ones--;
            } else {
                zeros++;
            }
            
            ans = max(ans, zeros + ones);
        }
        
        return ans;
    }
};