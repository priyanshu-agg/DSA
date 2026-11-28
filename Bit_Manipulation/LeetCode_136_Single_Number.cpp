// Problem: Single Number
// Platform: LeetCode
// Problem Number: 136
// Topic: Bit Manipulation
// Approach: XOR
// Time Complexity: O(n)
// Space Complexity: O(1)
//
// Intuition:
// Duplicate elements cancel each other using XOR.
// The remaining value is the single number.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            x ^= nums[i];
        }
        return x;
    }
};
