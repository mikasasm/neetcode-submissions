class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> freq;
        for(auto it:mp){
            freq.push_back({it.first,it.second});
        }
        sort(freq.begin(),freq.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i < k; i++){
           ans.push_back(freq[i].first);
        }
        return ans; 
    }
};
