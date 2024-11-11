class Solution {
public:
   bool isPrime(int num) {
        for (int divisor = 2; divisor <= sqrt(num); divisor++) {
            if (num % divisor == 0) {
                return false;
            }
        }
        return true;
    }

    bool primeSubOperation(vector<int>& nums) {
       int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> closestPrime(maxNum + 1, 0);

        for (int i = 2; i <= maxNum; i++) {
            if (isPrime(i)) {
                closestPrime[i] = i;
            } else {
                closestPrime[i] = closestPrime[i - 1];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            int limit = (i == 0) ? nums[0] : nums[i] - nums[i - 1];
            if (limit <= 0) {
                return false;
            }

            int primeToSubtract = closestPrime[limit - 1];
            nums[i] -= primeToSubtract;
        }

        return true;
    
    }
};