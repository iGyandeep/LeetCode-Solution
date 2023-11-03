class Solution {
public:
    int solveTabulation(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;

        for (int i=0; i<=amount; i++) {
            // trying to solve for every amount from 1 to amt.
            for (int j=0; j<coins.size(); j++) {
                if (i-coins[j] >= 0 && dp[i-coins[j]] != INT_MAX)
                    dp[i] = min(dp[i], 1+dp[i-coins[j]]);
            }
        }
        if (dp[amount] == INT_MAX)
            return -1;
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        return solveTabulation(coins, amount);
    }
};
