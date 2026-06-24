class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        // Iterate over the set to avoid redundant checks on duplicates
        for (int num : numSet) {
            // Check if 'num' is the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int len = 1;
                // Use the correct variable name 'len'
                while (numSet.find(num + len) != numSet.end()) {
                    len++;
                }
                // Update longest inside the scope where 'len' is defined
                longest = max(longest, len);
            }
        }
        return longest;
    }
};