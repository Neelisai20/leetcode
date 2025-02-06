class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
         unordered_map<int, int>mpp;
    int ct = 0, n = nums.size();

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int product = nums[i] * nums[j];
        ct += 8 * mpp[product];
        mpp[product]++;
      }
    }
    return ct;
    }
};