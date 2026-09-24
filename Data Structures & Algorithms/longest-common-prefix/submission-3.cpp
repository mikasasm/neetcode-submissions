class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans="";
        int minLen = strs[0].length();
        for(int j = 1; j < n; j++){
            if(strs[j].size()<minLen)
           minLen = strs[j].size();
        }
        for(int i=0;i<minLen;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]!=strs[0][i]){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};