class Solution {
public:
    bool keyboard (string str) {
        vector<string> kb;
        kb.push_back("qwertyuiop");
        kb.push_back("asdfghjkl");
        kb.push_back("zxcvbnm");

        int count_1 = 0;
        int count_2 = 0;
        int count_3 = 0;

        for (int i=0; i<str.size(); i++) {
            if (kb[0].find(tolower(str[i])) != -1)
                count_1++;
            if (kb[1].find(tolower(str[i])) != -1)
                count_2++;
            if (kb[2].find(tolower(str[i])) != -1)
                count_3++;
        }

        if (count_1 == str.size() || count_2 == str.size() || count_3 == str.size())
            return true;
        
        return false;

    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        for(int i=0; i<words.size(); i++) {
            if (keyboard(words[i]))
                ans.push_back(words[i]);
        }

        return ans;
    }
};
