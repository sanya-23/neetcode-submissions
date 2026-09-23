class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s;
       for(int i =0;i<nums.size();i++){
        s.insert(nums[i]);
       }
       int maxlength=0;
       for(auto i : s){
        if(s.find(i-1)==s.end()){
            int length=1;
            int current = i;
             maxlength= max(maxlength, length);
            while(s.find(current+1)!= s.end()){
                length = length+1;
                 current=current+1;
                maxlength= max(maxlength, length);
            }
        }
       }
       return maxlength; 
    }
};
