class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> n;
        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            
            if (n.count(complement)) return {n[complement], i};
            n[nums[i]] = i;

        }
    }
};
