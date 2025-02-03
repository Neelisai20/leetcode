class Solution {
public:
   int solve1(vector<int>&nums)
   {
    int i=0,j=0,n=nums.size();
    int maxi=0;
    while(j<n-1)
    {
        if(nums[j+1]>nums[j])
        {
            j++;
        }
        else
        {
            maxi=max(maxi,j-i+1);
            j++;
            i=j;
        }
    }
    return maxi=max(maxi,j-i+1);
   }
   int solve(vector<int>&nums)
   {
    int i=0,j=0,n=nums.size();
    int maxi=0;
    while(j<n-1)
    {
        if(nums[j+1]<nums[j])
        {
            j++;
        }
        else
        {
            maxi=max(maxi,j-i+1);
            j++;
            i=j;
        }
    }
    maxi=max(maxi,j-i+1);
    return maxi;
   }
    int longestMonotonicSubarray(vector<int>& nums) {
        int ct1=solve1(nums);
        int ct2=solve(nums);
        return max(ct1,ct2);
    }
};