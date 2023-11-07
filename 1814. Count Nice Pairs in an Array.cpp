class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while (n != 0) {
            int rem = n%10;
            rev = (rev*10) + rem;
            n /= 10;
        }
        return rev;
    }

    int countNicePairs(vector<int>& nums) {
        unordered_map<long, long> mp;
        long long ans = 0;
        for (int i=0; i<nums.size(); i++) {
            int k = nums[i] - reverse(nums[i]);
            if (mp.count(k))
                ans += mp[k];
            mp[k]++;
        }

        return ans % 1000000007;
    }
};
