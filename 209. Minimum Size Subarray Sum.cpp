class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int window = 0, ans = nums.size()+1, j = 0;
        for (int i=0; i<nums.size(); i++) {
            window += nums[i];
            while (window >= target) {
                ans = min(ans, i-j+1);
                window -= nums[j++];
            }
        }
        return ans == nums.size()+1 ? 0 : ans;
    }
};
