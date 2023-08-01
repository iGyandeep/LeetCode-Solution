/*    Approach - 1 */
class Solution {
public:

    vector<vector<int>> ans;

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;

        solve(1, n, k, temp);

        return ans;    
    }

    void solve(int start, int n, int k, vector<int>& temp) {
        if (k==0) {
            ans.push_back(temp);
            return;
        }

        if (start > n)
            return;

        temp.push_back(start);
        solve(start+1, n, k-1, temp);

        temp.pop_back();
        solve(start+1, n, k, temp);
    }
};




/*    Approach - 2 */

class Solution {
public:

    vector<vector<int>> ans;

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;

        solve(1, n, k, temp);

        return ans;    
    }

    void solve(int start, int n, int k, vector<int>& temp) {
        if (k==0) {
            ans.push_back(temp);
            return;
        }

        for (int i=start; i<=n; i++) {
            temp.push_back(i);
            solve(i+1, n, k-1, temp);
            temp.pop_back();
        }
    }
};
