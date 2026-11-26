// Problem: Stone Removal Game
// Platform: LeetCode
// Problem Number: 3360
// Topic: Greedy + Simulation
// Approach: Turn-by-Turn Simulation
// Time Complexity: O(1)
// Space Complexity: O(1)
//
// Intuition:
// Players alternately remove decreasing numbers
// of stones, starting from 10.
// The player unable to make a move loses.
// Even-indexed turns belong to Alice;
// odd-indexed turns belong to Bob.
class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }
        for (int i = 0; i < 10 ; i++) {
            n -= (10 - i);
            if (n < 0) {
                if (i % 2 == 0) {
                    return false;
                } else {
                    return true;
                }
            }
        }
        return true;
    }
};
