class Solution {
public:
    unordered_set<string> st;
    int n;
    int t[301];


    bool solve(int index, string &str) {
        if (index >= n)
            return true;

        if (t[index] != -1)
            return t[index];
        if (st.find(str) != st.end()) 
            return true;

        for (int len=1; len<=n; len++) {
            string temp = str.substr(index, len);

            if (st.find(temp) != st.end() && solve(index + len, str))
              return t[index]=true;
        }

        return t[index]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();
        memset(t, -1, sizeof(t)); 

        for (string &word : wordDict) {
            st.insert(word);
        }

        return solve(0, s);
    }
};
