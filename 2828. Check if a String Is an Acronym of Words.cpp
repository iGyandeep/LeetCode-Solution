class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (words.size() != s.size())
          return 0;

        int count = 0;
        for (int i=0; i<s.size(); i++) {
          if (s[i] == words[i][0])
            count++;
        }      
        
        return count == s.size() ? 1 : 0;
    }
};
