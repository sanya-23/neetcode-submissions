class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<pair<int,int>>freq;
       for(auto j:mpp){
         freq.push_back({j.second,j.first});
       }
       sort(freq.rbegin(),freq.rend());
       vector<int>result;
       for(int i=0;i<k;i++){
       result.push_back(freq[i].second);
       }
       return result;
    }
};
