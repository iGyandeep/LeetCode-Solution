class Solution {
public:
    int minExtraChar( string &s, vector<string>& dictionary) {
        int dp[51] = {}; // Initialize an array to store the minimum extra characters.
        int n = s.size();
        
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = 1 + dp[i + 1]; // Initialize with one extra character.
            
            for (const auto &w : dictionary) {
                if (i + w.size() <= n && s.compare(i, w.size(), w) == 0) {
                    dp[i] = min(dp[i], dp[i + w.size()]); // Update if a word in the dictionaryionary is found.
                }
            }
        }
        
        return dp[0]; // Return the minimum extra characters for the entire string.
    }

};
