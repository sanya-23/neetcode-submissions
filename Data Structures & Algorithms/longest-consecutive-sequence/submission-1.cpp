class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int longest=1;
      int currentstreak=1;
      if(nums.empty())return 0;
      for(int i=1;i<nums.size();i++){
        if(nums[i]!= nums[i-1]){
            if(nums[i]==nums[i-1]+1){
                currentstreak= currentstreak+1;
            }
            else{
                longest= max(longest,currentstreak);
                currentstreak=1;
            }
        }
      }
      return max(longest,currentstreak);
    }
};
