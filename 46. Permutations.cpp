class Solution {
private:
    void solution(vector<int> nums, int index, vector<vector<int>>& ans) {
                        // base case:
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
                        // recursive case:
        for (int i=index; i<nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            solution(nums, index+1, ans);
            swap(nums[index], nums[i]);     // backtrack
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) { 
        
        vector<vector<int>> ans;
        int index = 0;
        solution(nums, index, ans);
        return ans;
    }
};
