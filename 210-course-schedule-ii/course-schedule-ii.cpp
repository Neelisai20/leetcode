class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        queue <int>q;
        vector<int> adj[n];
        
        vector <int> in(n,0);
        for(int i=0;i<p.size();i++)
        {
         adj[p[i][0]].push_back(p[i][1]);
            in[p[i][1]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            {
                q.push(i);
            }
        }

        vector<int> topo;
        while(!q.empty())
        {
            auto it=q.front();
            topo.push_back(it);
            q.pop();
            for(auto x:adj[it])
            {
                in[x]--;
                if(in[x]==0)
                {
                    q.push(x);
                }
            }
        }
        reverse(topo.begin(),topo.end());
        if(topo.size()==n)
          return topo;
        return {};
    }
};