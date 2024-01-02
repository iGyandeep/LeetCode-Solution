class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> ans;

        for (int i=0; i<nums.size(); i++) {
            int freq = mp[nums[i]];

            if (freq == ans.size()) {
                ans.push_back({});   //add one more row
            }

            ans[freq].push_back(nums[i]);
            mp[nums[i]]++;
        }

        return ans;
    }
};
