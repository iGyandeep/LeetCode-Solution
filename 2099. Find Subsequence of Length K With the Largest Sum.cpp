class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        int t = k, i = 0;

        while (t) {
            ans.push_back(nums[i++]);
            t--;
        }

        for (int j=i; j<nums.size(); j++) {
            int mini = min_element(ans.begin(), ans.end()) - ans.begin();

            if (ans[mini] < nums[j]) {
                ans.erase(ans.begin() + mini);
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
