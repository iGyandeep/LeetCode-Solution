class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> s_last_index(26, 0);
        vector<bool> taken(26, false);
        string ans;

        for (int i=0; i<s.size(); i++) {
            s_last_index[s[i] - 'a'] = i;
        }

        for (int i=0; i<s.size(); i++) {
            int idx = s[i] - 'a';
            if (taken[idx] == true)
                continue;
            
            while (ans.length() > 0 && ans.back() > s[i] && s_last_index[ans.back()-'a'] > i) {
                taken[ans.back()-'a'] = false;
                ans.pop_back();
            }

            ans.push_back(s[i]);
            taken[idx] = true;
        }

        return ans;
    }
};
