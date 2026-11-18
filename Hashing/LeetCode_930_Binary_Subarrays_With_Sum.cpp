// Problem: Binary Subarrays With Sum
// Platform: LeetCode
// Problem Number: 930
// Topic: Prefix Sum + Hashing
// Approach: Prefix Sum + Frequency Map

// Time Complexity: O(n)
// Space Complexity: O(n)

// Mathematical Intuition:
// prefix[i] - prefix[j] = goal
// prefix[j] = prefix[i] - goal

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0, count = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mpp.count(sum - goal)) {
                count += mpp[sum - goal];
            }
            mpp[sum]++;
        }
        return count;
    }
};
