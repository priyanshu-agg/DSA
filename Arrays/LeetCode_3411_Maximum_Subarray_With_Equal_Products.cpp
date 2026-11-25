// Problem: Maximum Subarray With Equal Products
// Platform: LeetCode
// Problem Number: 3411
// Topic: Arrays + Number Theory
// Approach: Brute Force + GCD + LCM
// Time Complexity: O(n^2 * log M)
// Space Complexity: O(1)
//
// Mathematical Intuition:
// A subarray is product equivalent when:
// Product = GCD * LCM
//
// Since nums[i] <= 10:
// GCD * LCM <= 10 * 2520 = 25200.
// Break when the product exceeds this limit.


class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxlen = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long prod = 1, g = 0, l = 1;
            for (int j = i; j < n; j++) {
                prod *= nums[j];
                if (prod > 25200) {
                    break;
                }
                l = lcm(l, nums[j]);
                g = gcd(g, nums[j]);
                if (prod == (g * l)) {
                    if ((j - i + 1) > maxlen) {
                        maxlen = j - i + 1;
                    }
                }
            }
        }
        return maxlen;
    }
};
