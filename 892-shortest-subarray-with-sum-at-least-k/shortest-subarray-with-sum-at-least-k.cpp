class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefix(n + 1, 0);
        deque<int> dq;
        int result = INT_MAX;

        for (int j = 0; j < n; ++j) {
            prefix[j + 1] = prefix[j] + nums[j];

            if (prefix[j + 1] >= k) {
                result = min(result, j + 1);
            }

            while (!dq.empty() && prefix[j + 1] - prefix[dq.front()] >= k) {
                result = min(result, j + 1 - dq.front());
                dq.pop_front();
            }

            while (!dq.empty() && prefix[j + 1] <= prefix[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(j + 1);
        }

        if (result== INT_MAX) return -1;
        else
            return result;
    }
};