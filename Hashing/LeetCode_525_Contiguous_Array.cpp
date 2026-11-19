// Problem: Contiguous Array
// Platform: LeetCode
// Problem Number: 525
// Topic: Prefix Sum + Hashing
// Approach: Equal Frequency using Prefix Sum

// Time Complexity: O(n)
// Space Complexity: O(n)

// Mathematical Intuition:
// Convert 0 into -1 and keep 1 as +1.
// Equal number of 0s and 1s means prefix sum = 0.
// If prefix[i] == prefix[j],
// then the subarray between them has equal 0s and 1s.


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max = 0, x = 0;
        unordered_map<int, int> mpp;
        mpp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                x -= 1;
            } else {
                x += 1;
            }
            if (mpp.count(x)) {
                if ((i - mpp[x]) > max) {
                    max = i - mpp[x];
                }
            } else {
                mpp[x] = i;
            }
        }
        return max;
    }
};
