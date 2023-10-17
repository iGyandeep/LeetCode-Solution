class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() <= 2)
            return -1;

        int a = min(nums[0], nums[1]);
        int b = max(nums[0], nums[1]);
        int c = nums[2];
        if (c<b && c>a)
            return c;
        if (c < a)
            return a;
        if (c > b)
            return b;
        
        return -1;
    }
};
