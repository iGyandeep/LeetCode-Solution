class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int start = 0;
        int end = nums.size()-1;

        while (start <= end) {
            if (nums[start] == target) {
                ans[0] = start;
                break;
            }
            start++;
        }
        while (start <= end) {
            if (nums[end] == target) {
                ans[1] = end;
                break;
            }
            end--;
        }

        return ans;
    }
};
