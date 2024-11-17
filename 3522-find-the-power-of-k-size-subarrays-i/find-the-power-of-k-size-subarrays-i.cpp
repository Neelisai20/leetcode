class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        if (k == 1)
            return nums;
        int pre = 1;
        int left = 0;
        int right = k - 1;
        int n = nums.size();
        while (right < n) {
            if (pre == 0) {
                if (nums[right - 1] + 1 == nums[right]) {
                    ans.push_back(nums[right]);
                } else {
                    ans.push_back(-1);
                    pre = 1;
                }
            } else {
                int flag = 0;
                for (int i = left; i < right; i++) {
                    if (nums[i] + 1 != nums[i + 1]) {
                        ans.push_back(-1);
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    ans.push_back(nums[right]);
                    pre = 0;
                }
            }
            left++;
            right++;
        }
        return ans;
    }
};