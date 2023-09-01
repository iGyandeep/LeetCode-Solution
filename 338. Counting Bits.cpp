/*  Approach - 1: Brute Force */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for (int i=0; i<=n; i++) {
            int num = i, countOneBits = 0;
            while (num != 0) {
                int rem = num % 2;
                countOneBits += rem;
                num /= 2;
            }
            ans.push_back(countOneBits);
        }
        return ans;
    }
};


/*  Approach - 2: Optimize  */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);

        for (int i=0; i<=n; i++) {
            if (i%2 == 0)
                ans[i] = ans[i/2];
            else
                ans[i] = ans[i/2] + 1;
        }
        return ans;
    }
};
