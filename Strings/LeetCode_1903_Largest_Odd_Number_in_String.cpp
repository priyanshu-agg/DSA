// Problem: Largest Odd Number in String
// Platform: LeetCode
// Problem Number: 1903
// Topic: Strings
// Approach: Greedy + Backward Traversal
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space
//
// Mathematical Intuition:
// An integer is odd if its last digit is odd.
// Find the rightmost odd digit to obtain
// the longest possible odd-number prefix.


class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(), x = -1;
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                x = i;
                break;
            }
        }
        num.erase(x + 1, n - x - 1);
        return num;
    }
};
