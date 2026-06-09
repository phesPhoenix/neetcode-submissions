class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax {0};
        int gMax{nums[0]};

        for (int n: nums){
            curMax += n;
            if (curMax > gMax){
                gMax = curMax;
            }
            if (curMax < 0){
                curMax = 0;
            }
        }
        return gMax;
    }
};
