class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans;
        for(auto x : mp) {
            if (x.second == 1) {
                ans = x.first;
                break;
            }
        }

        return ans;
    }
};




/* Similar to First Approach but without using of the map inbuilt function*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> maps;
        for (int i=0; i<nums.size(); i++)
            maps[nums[i]]++;
        int ans;
        for (int i=0; i<nums.size(); i++)
            if (maps[nums[i]] == 1) {
                ans = nums[i];
                break;
            }
        return ans;
    }
};
