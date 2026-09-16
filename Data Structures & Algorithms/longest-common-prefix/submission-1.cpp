class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int minLen = strs[0].length();
        for(int j = 1; j < strs.size(); j++){
           minLen = min(minLen, (int)strs[j].length());
        }
        for(int i=0;i<minLen;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]!=strs[0][i]){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0].substr(0,minLen);
    }
};