class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int> seen;
        for(int i=0;i<n ; i++){
            int s = target-nums[i];
            if(seen.find(s)!=seen.end()){
                return{seen[s],i};
            }
            seen[nums[i]]=i;
        }
        
    }
};
