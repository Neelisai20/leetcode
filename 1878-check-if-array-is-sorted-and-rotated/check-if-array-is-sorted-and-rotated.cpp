class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        while(j<n-1)
        {
            if(nums[j]<=nums[j+1])
            {
                j++;
            }
            else
            {
                break;
            }
        }
        int i=(j+1)%n;
        for(int j=0;j<n-1;j++)
        {
            if(nums[i]<=nums[(i+1)%n])
            {
                i=(i+1)%n;
            }
            else
            {
                return false;
            }
        }
      return true;
    }
};