class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int ct=0;
        unordered_map<int,int> mpp,color;
      
        vector<int> res;
        for(int i=0;i<queries.size();i++)
        {
            auto it=queries[i];
            int a=it[0];
            int b=it[1];
            
            if(mpp.find(a)!=mpp.end())
            {
                int prev=mpp[a];
                color[prev]--;
                if(color[prev]==0) color.erase(prev);
            }
            mpp[a]=b;
            color[b]++;
            res.push_back(color.size());
        }
        return res;
    }
};