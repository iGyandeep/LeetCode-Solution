class Solution {
private:
    void solution(string digits, string combinations, int index, string keyPad[], vector<string>& ans) {
        
                        // Base Case:-
        if (index >= digits.length())
        {
            ans.push_back(combinations);
            return;
        }
        
                        // Recursive Case:-
        int keyPadIndex = digits[index] - '0';
        string value = keyPad[keyPadIndex];
        
        for (int i=0; i<value.length(); i++)
        {
            combinations.push_back(value[i]);
            solution(digits, combinations, index+1, keyPad, ans);
            combinations.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        
        if (digits.length() == 0)
            return {};
        
        vector<string> ans;   
        string combinations = "";
        string keyPad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int index = 0;
        
        solution(digits, combinations, index, keyPad, ans);
        
        return ans;
    }
};
