class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int>mp;
        int count = INT_MIN;
        int ans = -1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] % 2 == 0)
                mp[nums[i]]++;
        }

        for (auto x : mp) {
            if (x.second > count) {
                ans = x.first;
                count = x.second;
            }
        }

        return ans;
    }
};
