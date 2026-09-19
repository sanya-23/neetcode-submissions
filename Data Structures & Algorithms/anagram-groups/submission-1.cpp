class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< string, vector<string>>mpp;
        vector<vector<string>>v;
        for(int i =0;i<strs.size();i++){
            string key = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mpp[strs[i]].push_back(key);
        }
     for(auto x : mpp){
        v.push_back(x.second);
     }
return v;
    }
};