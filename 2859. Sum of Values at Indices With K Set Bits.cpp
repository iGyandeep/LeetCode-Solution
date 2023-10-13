class Solution {
public:
    int countOneBit(int i) {
        int count = 0;
        while (i != 0) {
            if (i%2 == 1)
                count++;
            i /= 2;
        }
        return count;
    }
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i=0; i<nums.size(); i++) 
            if (countOneBit(i) == k)
                sum += nums[i];
        return sum;
    }
};
