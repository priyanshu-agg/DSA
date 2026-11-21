// Problem: Assign Umbrella on Rainy Days
// Platform: LeetCode
// Problem Number: 4116
// Topic: Greedy
// Approach: Greedy Allocation with Frequency Counting
// Time Complexity: O(n)
// Space Complexity: O(n)
//
// Intuition:
// If both need the umbrella, assign it to the
// person who has received it fewer times.
// In case of a tie, prioritize Alice.
// If only Bob needs it, assign it to Bob.


class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int alice = 0, bob = 0, n = rain.size();
        for (int i = 0; i < n - 1; i++) {
            if (rain[i] == rain[i + 1] && rain[i] == 1) {
                if (alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                } else {
                    ans.push_back("Bob");
                    bob++;
                }
            } else if (rain[i] == 1) {
                ans.push_back("Bob");
                bob++;
            } else {
                ans.push_back("None");
            }
        }
        if (rain[n - 1] == 1) {
            ans.push_back("Bob");
        } else {
            ans.push_back("None");
        }
        return ans;
    }
};
