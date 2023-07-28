class Solution {
public:
    int n;
    int t[23][23];
    
    //Player1 - Player2
    int maxDiff(vector<int>& nums, int l, int r) {
        
        if(l == r)
            return nums[l];
        
        if(t[l][r] != -1)
            return t[l][r];
        
        int take_left  = nums[l] - maxDiff(nums, l+1, r);
        int take_right = nums[r] - maxDiff(nums, l, r-1);
        
        return t[l][r] = max(take_left, take_right);
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return maxDiff(nums, 0, n-1) >= 0;
            
    }
};
