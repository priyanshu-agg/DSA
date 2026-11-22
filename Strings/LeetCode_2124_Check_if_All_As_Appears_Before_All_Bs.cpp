// Problem: Check if All A's Appears Before All B's
// Platform: LeetCode
// Problem Number: 2124
// Topic: Strings
// Approach: Single Traversal + State Tracking
// Time Complexity: O(n)
// Space Complexity: O(1)
//
// Intuition:
// Once 'b' appears, no 'a' should appear afterward.
// Track whether 'b' has been encountered.


class Solution {
public:
    bool checkString(string s) {
        int n = s.size(), x = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b' && x == 0) {
                x = 1;
            } else if (s[i] == 'a' && x == 1) {
                return false;
            }
        }
        return true;
    }
};
