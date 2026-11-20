// Problem: Sum of Beauty of All Substrings
// Platform: LeetCode
// Problem Number: 1781
// Topic: Strings + Frequency Counting
// Approach: Character Frequency Counting
// Time Complexity: O(n^2 * 26) = O(n^2)
// Space Complexity: O(26) = O(1)
//
// Mathematical Intuition:
// Beauty = Maximum Frequency - Minimum Frequency
// Consider only characters present in the substring.


class Solution {
public:
    int beautySum(string s) {
        long long sum = 0;
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            unordered_map<int, int> mpp;
            int high = 0;
            for (int j = i; j < n; j++) {
                int low = INT_MAX;
                mpp[s[j]]++;
                if (mpp[s[j]] > high) {
                    high = mpp[s[j]];
                }
                for (auto it : mpp) {
                    if (it.second < low) {
                        low = it.second;
                    }
                }
                sum += (high - low);
            }
        }
        return sum;
    }
};
