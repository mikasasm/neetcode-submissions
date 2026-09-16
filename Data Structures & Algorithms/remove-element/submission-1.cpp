class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int i = 0;

        while(i < n) {

            if(nums[i] == val) {

                for(int j = i + 1; j < n; j++) {
                    nums[j - 1] = nums[j];
                }

                n--;   // size effectively 1 kam

            } else {
                i++;
            }
        }

        return n;
    }
};