class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int i=0; i<nums.size(); i++) 
            mp[nums[i]]++;

        int count = -1, ans;

        for (auto &x : mp) {
            if (count < x.second) {
                count = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};
