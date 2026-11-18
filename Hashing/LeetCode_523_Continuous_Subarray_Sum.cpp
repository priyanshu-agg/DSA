// Problem: Continuous Subarray Sum
// Platform: LeetCode
// Problem Number: 523
// Topic: Prefix Sum + Hashing
// Approach: Remainder-based Prefix Sum

// Time Complexity: O(n)
// Space Complexity: O(min(n, k))

// Mathematical Intuition:
// (prefix[i] - prefix[j]) % k = 0;
// prefix[i] % k = prefix[j] % k;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0, rem = 0;
        unordered_map<int, int> mpp;
        mpp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            rem = sum % k;
            if (mpp.count(rem)) {
                if ((i - mpp[rem]) >= 2) {
                    return true;
                }
            } else {
                mpp[rem] = i;
            }
        }
        return false;
    }
};
