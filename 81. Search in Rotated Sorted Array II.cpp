/*  Appraoch - 1  */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        vector<int>::iterator it = find(nums.begin(), nums.end(), target);
        if (it != nums.end())
            return true;
        else
            return false;
    }
};
