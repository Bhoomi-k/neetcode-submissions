class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> mp;
        for(const auto& s: strs){
            vector<int> freq(26, 0);
            for(char c : s){  // s = cab then freq = {1,1,1,0,0,0,....};
                freq[c-'a']++;
            }
            string key = to_string(freq[0]); //key = "1"
            for(int i=1;i<26;i++){    
                key += ',' + freq[i];   // key = "1110000..." unique key
            }
            mp[key].push_back(s); //"111000..." : {"cab"}
        }
        vector<vector<string>> res;
        for(const auto&x : mp){
            res.push_back(x.second);
        }
        return res;
    }
};
