class Solution {
public:
    string clearDigits(string s) {
       
       int n=s.size();
      int i=0;
       while(i<n)
        {
            if(isdigit(s[i]))
            {
              s[i]='_';
              int j=i-1;
              while(j>=0)
              {
                if(isalpha(s[j]))
                {
                    s[j]='_';
                    break;
                }
                j--;
              }
            }
            i++;
        }
        string s1="";
        for(i=0;i<n;i++)
        {
            if(s[i]!='_')
            {
                s1+=s[i];
            }
        }
        return s1;
    }
};