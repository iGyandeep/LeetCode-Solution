class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        int countBar = 0;

        for (int i=0; i<s.size(); i++) {
            if (s[i] == '|')
                countBar++;
            
            if (countBar%2 == 0)
                if (s[i] == '*')
                    ans++;
        }

        return ans;
    }
};
