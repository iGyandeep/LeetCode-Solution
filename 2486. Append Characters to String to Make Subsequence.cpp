class Solution {
public:
    int solve(string s, string t) {
      int i = 0, j = 0;
      while (i<t.size() && j<s.size()) {
        if (t[i] == s[j])
          i++;
        j++;
      }
      return i;
    }
    int appendCharacters(string s, string t) {
        int x = solve(s, t);
        return t.size()-x;
    }
};
