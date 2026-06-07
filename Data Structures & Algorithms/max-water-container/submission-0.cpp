class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() -1;
        int max_val = 0;
        while (left < right){
            int water = (right -left) * min(heights[left], heights[right]);
            heights[left] < heights[right] ? left++ : right--;
            if (max_val < water){
                max_val = water;
            }

        }
     return max_val;
    }
};
