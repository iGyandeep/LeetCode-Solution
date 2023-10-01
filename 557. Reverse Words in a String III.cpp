/*  Approach - 1:    */

class Solution {
public:
    string reverseWords(string s) {
        
        int l = 0;
        int r = 0;
        while (l < s.length()) {
            while (r < s.size() && s[r] != ' ')
                r++;
            reverse(s.begin()+l, s.begin()+r);
            l = r + 1;
            r = l;
        }
        return s;
    }
};




/*  Approach - 2:    */


class Solution {
public:
    string reverseWords(string s) {
        if (s.size()==1)
          return s;

        int l = 0;
        for (int i=0; i<s.size(); i++) {
          if (s[i] == ' ') {
            reverse(s.begin()+l, s.begin()+i);
            l = i + 1;
          }
        }
        reverse(s.begin()+l, s.end());
        return s;
    }
};
