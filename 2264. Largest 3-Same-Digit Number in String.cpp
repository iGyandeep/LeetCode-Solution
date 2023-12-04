class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        string ans;
        for(int i = 0; i<n-2; i++){
            string s = num.substr(i, 3);
            if(s[0] == s[1] && s[1] ==  s[2]){
                if(int(ans[0]) < int(s[0]) || ans.size() == 0){
                    ans = s;
                }
            }
        }

        return ans;
    }
};
