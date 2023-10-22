class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
            return 1;

        int n = num;
        int mask = 0;
        while (n != 0) {
            mask = (mask << 1) | 1;
            n = n >> 1;
        }
        int ans = (~num) & mask;
        return ans;
    }
};
