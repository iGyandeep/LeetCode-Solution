/*  Approach - 1:  */


class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int i=0; i<=15; i++) {
            if (pow(4, i) == n)
                return true;
        }
        return false;
    }
};


/*  Approach - 2:  */

class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans = 1;
        for (int i=0; i<=15; i++) {
            if (n == ans)
                return true;
            if (ans < INT_MAX/4)
                ans *= 4;
        }
        return false;
    }
};
