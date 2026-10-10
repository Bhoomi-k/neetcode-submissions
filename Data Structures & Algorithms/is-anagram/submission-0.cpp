class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1!=n2) return false;
        int a1[26] = {0}; //because it is given its strictly lower english letters
        int a2[26] = {0};
        for(int i=0;i<n1;i++){
            a1[s[i]-'a']++;
            a2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a1[i]!=a2[i]) return false;
        }
        return true;
    }
};
