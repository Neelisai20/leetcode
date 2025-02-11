class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        long long bad=0;
        for(int i=0;i<nums.size();i++)
        {
          int diff=i-nums[i];
          int goodi=mpp[diff];
           bad+=i-goodi;
          mpp[diff]=goodi+1;
        }
return bad;
    }
};