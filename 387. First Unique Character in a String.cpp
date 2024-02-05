class Solution {
public:
    int firstUniqChar(string s) {
        
        int count[26] = {0};
        int position;
        
        for (int i=0; i<s.length(); i++)
        {
            position = s[i] - 'a';
            count[position]++;
        }
        
        for (int j=0; j<s.length(); j++)
        {
            position = s[j] - 'a';
            if (count[position] == 1)
                return j;
        }
        return -1;
    }
};
