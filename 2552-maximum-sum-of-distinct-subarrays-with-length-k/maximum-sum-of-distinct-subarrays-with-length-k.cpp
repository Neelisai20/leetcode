class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int l=0,r=0;
       unordered_map<int,int> mpp;
       long long sum=0;
       long long maxi=INT_MIN;
       while(r<n)
       {
          mpp[nums[r]]++;
          sum+=nums[r];
         
            while(mpp[nums[r]]>1)
            {
                sum-=nums[l];
                
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }
          if(r-l+1>k)
          {
            sum-=nums[l];
            mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
          }
          if(r-l+1==k)
          {
          maxi=max(maxi,sum);
          }
          r++;
       } 
       if(maxi==INT_MIN)
       return 0;
       else
       return maxi;
    }
};