class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int i = 0;
        int j = nums.size() - 1;
        
        int ans = nums[i]*nums[i+1] - nums[j]*nums[j-1];
        
        return abs(ans);
    }
};
