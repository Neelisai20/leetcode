class Solution {
public:
bool check(stack<char>&st,string&part)
{
    stack<char> temp=st;
    for(int j=part.size()-1;j>=0;j--)
    {
        if(temp.top()!=part[j])
           return false;
        temp.pop();
    }
    return true;
}
    string removeOccurrences(string s, string part)
    {

      stack<char> st;
      int n=s.size();
      for(int i=0;i<n;i++)
      {
        st.push(s[i]);
        if(st.size()>=part.size()&&check(st,part))
        {
            for(int j=0;j<part.size();j++)
            {
                st.pop();
            }
        }
      }
     // stack<char> t;
      string str="";
      
      while(!st.empty())
      {
        str+=st.top();
        st.pop();
      }
      reverse(str.begin(),str.end());
      return str;
    }
};