class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mSol;
        
        for (int i = 0; i < strs.size(); i++) {
            int count[26] = {0};

            for(char c : strs[i]){
                int k = c - 'a';
                count[k]++;
            }

            string key;
            for (int j = 0; j < 26; j++){ //make a specific key for the hashmap
                key += '#';
                key += to_string(count[j]);
            }
            mSol[key].push_back(strs[i]);
        }
        vector<vector<string>> sol;
        for(auto&[key,group] : mSol){
            sol.push_back(group);
        }
        return sol;
    }
};
