class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int i=n/2; i>=1; i--) {
            
            if (n%i == 0) {
                string subStr = s.substr(0, i);
                string newStr = "";

                for (int j=1; j<=n/i; j++) {
                    newStr.append(subStr);
                }

                if (newStr == s)
                    return 1;
            }
        }

        return 0;
    }
};
