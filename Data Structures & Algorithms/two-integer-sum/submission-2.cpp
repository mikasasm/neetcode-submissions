class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int w=target-nums[i];
                if(s.find(w)!=s.end()){
                    return{s[w],i};
                }
                s[nums[i]] = i;
        }
        

    }
};
