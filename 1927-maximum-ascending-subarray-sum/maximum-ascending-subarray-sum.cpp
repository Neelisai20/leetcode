class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int l=0,r=1;
       double sum=nums[0];
       double maxi=sum;
        while(r<n)
        {
           if(nums[r]>nums[r-1])
           {
            sum+=nums[r];
           }
           else
           {
            sum=nums[r];
           }
           maxi=max(sum,maxi);
           r++;
        }
        return (int)maxi;
    }
};