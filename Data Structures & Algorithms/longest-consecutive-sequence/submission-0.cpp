class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setnums(nums.begin(), nums.end());
        int longest = 0;
        for (int n: nums){
            
            if (!setnums.contains(n-1)) {
            int seq = 1;
            int current = n;
            while (setnums.contains(current+1)){
                seq++;
                current++;
            }
            longest = max(longest, seq);
            }
            

        }
    return longest;
    }
};
