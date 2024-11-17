class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k)
    {
        int n = nums.size(),mini = INT_MAX;;
        for (int i = 0; i < n; ++i) {
            int ctor = 0;
            for (int j = i; j < n; ++j) {
                ctor |= nums[j];
                if (ctor >= k) {
                    mini = min(mini, j-i+1);
                    break;
                }
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};