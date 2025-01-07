class Solution {
public:
    int solve(int i,int t,vector<vector<int>> &dp,vector<int> nums)
    {
        if(i==0)
        {
            if(t==0&&nums[i]==0) return 2;
            else if(t==0||t==nums[i]) return 1;
            else return 0;
        }
        if(dp[i][t]!=-1)
         return dp[i][t];
        int nopick=solve(i-1,t,dp,nums);
        int pick=0;
        if(nums[i]<=t)
          pick=solve(i-1,t-nums[i],dp,nums);
        return dp[i][t]=pick +nopick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
        }
        if(sum<target)
        {
            return 0;
        }
        int t=sum-target;
        if(t%2==1) return 0;
        
        vector<vector<int>> dp(nums.size(),vector<int>(t/2+1,-1));
        return solve(nums.size()-1,t/2,dp,nums);
    }
};