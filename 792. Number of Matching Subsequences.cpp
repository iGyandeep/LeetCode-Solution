class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = 0, j = 0;

        while (i<n && j<m) {
            if (s[i] == t[j]) {
                i++;
            if (i == n)
                return true;
            }
            j++;
        }

        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        unordered_map<string, int> u_map;
        for (int i=0; i<words.size(); i++) {
            u_map[words[i]]++;
        }

        for (auto x : u_map)
            if (isSubsequence(x.first, s))
                count += x.second;
        return count;
    }
};
