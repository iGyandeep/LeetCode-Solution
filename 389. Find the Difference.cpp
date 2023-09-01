/*  Approach - 1 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq_1(26, 0), freq_2(26, 0);
        for (int i=0; i<s.size(); i++) {
            freq_1[s[i] - 'a']++;
        }
        for (int i=0; i<t.size(); i++) {
            freq_2[t[i] - 'a']++;
        }
        char ch;
        for (int i=0; i<26; i++) {
            if (freq_1[i] != freq_2[i]) {
                ch = i + 'a';
                break;
            }
        }

        return ch;
    }
};


/*  Approach - 2:  */

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for (int i=0; i<s.size(); i++)
            if (s[i] != t[i])
                return t[i];
                
        return t[t.size()-1];
    }
};
