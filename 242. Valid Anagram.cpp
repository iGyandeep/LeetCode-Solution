/*  Approach - 1  */

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size())
            return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
};

/*  Approach - 2    */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> freq_S(26, 0);
        vector<int> freq_T(26, 0);

        for (int i=0; i<s.size(); i++) 
            freq_S[s[i]-'a']++;

        for (int i=0; i<t.size(); i++) 
            freq_T[t[i]-'a']++;
        
        for (int i=0; i<26; i++) 
            if (freq_S[i] != freq_T[i])
                return false;
        
        return true;
    }
};
