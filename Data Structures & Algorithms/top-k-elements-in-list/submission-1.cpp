class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int >ans;
        map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        while(k--){
            int maxelement =0;
            int maxfrequency =0;
            for(auto x : mpp){
                if(x.second>maxfrequency){
                    maxfrequency = x.second;
                    maxelement = x.first;
                }
            }
            ans.push_back(maxelement);
            mpp.erase(maxelement);
        }
        return ans;
    }
};
