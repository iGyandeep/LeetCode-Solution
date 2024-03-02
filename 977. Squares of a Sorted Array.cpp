class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int start = 0;
        int end = nums.size()-1;

        int j = nums.size()-1;

        while (start <= end) {
            if (abs(nums[start]) < abs(nums[end])) {
                ans[j--] = nums[end] * nums[end];
                end--;
            }
            else {
                ans[j--] = nums[start] * nums[start];
                start++;
            }
        }
        return ans;
    }
};
