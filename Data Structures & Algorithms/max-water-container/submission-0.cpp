class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right= heights.size()-1;
        int max_water=0;
        while(left<right){
            int h = min(heights[left],heights[right]);
            int width =right -left;
            int area= width* h;
            max_water = max(max_water, area);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
right--;
            }

        }
        return max_water;
    }
};
