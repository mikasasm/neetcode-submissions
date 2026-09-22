class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for(int num : nums) {

            // Agar num-1 nahi hai, toh ye sequence ka starting point hai
            if(s.find(num - 1) == s.end()) {

                int current = num;
                int count = 1;

                // Aage consecutive numbers check karo
                while(s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};