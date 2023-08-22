class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while (columnNumber) {
            char ch = 'A' + (columnNumber - 1) % 26;
            ans = ch + ans;
            columnNumber = (columnNumber - 1) /26;
        }

        return ans;
    }
};
