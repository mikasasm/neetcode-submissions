class Solution {
public:
    bool isAnagram(string s, string t) {
       int count[26] = {0};
       int n=s.length();
       int m=t.length();
       for(int i=0;i<n;i++){
         count[s[i]-'a']++;
       }
       for(int j=0;j<m;j++){
         count[t[j]-'a']--;
       }
       for(int i=0;i<26;i++){
         if (count[i]!=0){
            return false;
         }
       }
       return true;
    }
};
