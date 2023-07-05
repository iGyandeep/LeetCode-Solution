class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int head = 0, tail = 0, length = 0, count = 0;

        for (head=0; head<nums.size(); head++) {
            if (nums[head] == 0) {
                count++;
            }
            while (count > 1) {
                if (nums[tail] == 0) {
                    count--;
                }
                tail++;
            }
            length = max(length, head-tail);
        }
        return length;
    }
};
