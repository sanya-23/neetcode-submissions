class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
       for(int i=0;i<nums.size();i++){
        int second_element = target -nums[i];
        if(mpp.find(second_element) != mpp.end()){
            return { mpp[second_element] ,i};
        }
        else{
            mpp[nums[i]]=i;
        }
       }
    return {};
    }
};
  
