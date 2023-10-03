/*  Approach - 1: Brute Force  ;  Time Complexity: O(n^2)  */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count = 0;
        
        for (int i=0; i<nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};


/*  Approach - 2: Optimize  ;  Time Complexity:  O(n)  */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        vector<int> freq_count(101, 0);
        for (auto x : nums) {
            ans += freq_count[x];
            freq_count[x]++;
        }
        return ans;
    }
};
