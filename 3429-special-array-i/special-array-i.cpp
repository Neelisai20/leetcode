class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        while(j<n-1)
        {
            if((nums[j]%2==0&&nums[j+1]%2==1)||(nums[j]%2==1&&nums[j+1]%2==0))
            {
                j++;
            }
            else
              return false;
        }
        return true;
    }
};