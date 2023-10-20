class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for (int i=0; i<s.size(); i++) {
            if (s1.empty()) {
                if (s[i] == '#')
                    continue;
                s1.push(s[i]);
            }
            else {
                if (s[i] == '#')
                    s1.pop();
                else
                    s1.push(s[i]);
            }
        }
        for (int i=0; i<t.size(); i++) {
            if (s2.empty()) {
                if (t[i] == '#')
                    continue;
                s2.push(t[i]);
            }
            else {
                if (t[i] == '#')
                    s2.pop();
                else
                    s2.push(t[i]);
            }
        }

        if (s1.size() != s2.size())
            return false;
        
        while (s1.empty() == false) {
            if (s1.top() == s2.top()) {
                s1.pop();
                s2.pop();
            }
            else
                return false;
        }

        return true;
    }
};
