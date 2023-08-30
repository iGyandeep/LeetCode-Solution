class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bits = 0;
        for (auto x : nums) {
            bits |= x;
        }
        return (bits * pow(2, nums.size()-1));
    }
};
