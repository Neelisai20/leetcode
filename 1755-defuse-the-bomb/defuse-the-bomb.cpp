class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int n=code.size();
        vector<int> b;
        if(abs(k)>n)
         k=k%n;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                b.push_back(0);
            }
        }
        if(k>0)
        {
            for(int i=0;i<n;i++)
            {  int sum=0;
                for(int j=1;j<=k;j++)
                {
                    sum+=code[(i+j)%n];
                }
                b.push_back(sum);
            }
        }
         if(k<0)
        {
            int m=abs(k);
            for(int i=0;i<n;i++)
            {  int sum=0;
                for(int j=1;j<=m;j++)
                {
                    sum+=code[(i-j+n)%n];
                }
                b.push_back(sum);
            }
        }
        
  return b;
    }
};