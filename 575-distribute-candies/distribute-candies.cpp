class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mpp;
        int n=candyType.size();
        for(int i=0;i<n;i++)
        {
            mpp[candyType[i]]++;
        }
        int k=mpp.size();
        if(k>=n/2)
        {
            return n/2;
        }
        else{
            return k;
        }
    }
};