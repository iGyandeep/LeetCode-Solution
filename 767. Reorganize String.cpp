class Solution {
public:
    string reorganizeString(string s) {
        
        int n = s.length();
        
        vector<int> count(26, 0);
        int maxFreq   = 0;
        char maxFreqCh;
        for(char &ch : s) {
            count[ch-'a']++;
            
            if(count[ch-'a'] > maxFreq) {
                maxFreq = count[ch-'a'];
                maxFreqCh = ch;
            }
            
            if(count[ch-'a'] > (n+1)/2)
                return "";
        }

        string result = s;
        int index     = 0;

        // Place the most frequent letter
        while (count[maxFreqCh-'a'] != 0) {
            result[index] = maxFreqCh;
            index += 2;
            count[maxFreqCh-'a']--;
        }

        // Place rest of the letters in any order
        for (char ch = 'a'; ch <= 'z'; ch++) {
            
            while (count[ch-'a'] > 0) {
                if (index >= n) {
                    index = 1;
                }
                result[index] = ch;
                index += 2;
                count[ch-'a']--;
            }
        }

        return result;
    }
};
