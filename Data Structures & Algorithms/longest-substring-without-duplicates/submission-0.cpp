class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int maxi = 0;
        int i = 0;
        for(int j=0;j<n;j++){
            while(mp.find(s[j])!=mp.end()){
                mp.erase(s[i]);
                i++;
            }
            maxi = max(maxi,j-i+1);
            mp[s[j]]=j;
        }
        return maxi;
    }
};
