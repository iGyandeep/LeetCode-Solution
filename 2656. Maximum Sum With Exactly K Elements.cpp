class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x = *max_element(nums.begin(), nums.end());
        int ans = x;
        for (int i=1; i<k; i++) {
            ans = ans + (x+i);
        }
        return ans;
    }
};
