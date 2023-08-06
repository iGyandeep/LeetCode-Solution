class Solution {
public:
    int x = 1e9+7;
    long long solve (int n, int goal, int k, vector<vector<long long>> &memo) {
        if (goal == 0 && n == 0)
            return 1;
        
        if (goal==0 || n == 0)
            return 0;

        if (memo[n][goal] != -1) 
            return memo[n][goal];
        
        long long replayOld = solve(n, goal-1, k, memo) * (max(0, n-k));
        long long playNew = solve(n-1, goal-1, k, memo) * n;

        memo[n][goal] = (replayOld + playNew) % x;

        return memo[n][goal];
    }
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<long long>> memo(n+1, vector<long long>(goal+1, -1));
        return solve(n, goal, k, memo);
    }
};
