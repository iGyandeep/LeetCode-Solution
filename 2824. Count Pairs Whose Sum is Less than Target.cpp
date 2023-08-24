/*  Approach - 1: Brute Force  */

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans = 0;
        for (int i=0; i<nums.size(); i++) 
            for (int j=i+1; j<nums.size(); j++) 
                if (nums[i] + nums[j] < target)
                    ans++;    
        return ans;
    }
};

/*  Approach - 2: Two Pointer  */

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int start = 0, end = nums.size()-1;

        while (start < end) {
            if (nums[start] + nums[end] < target) {
                ans = ans + end - start;
                start++;
            }
            else {
                end--;
            }
        }

        return ans;
    }
};
