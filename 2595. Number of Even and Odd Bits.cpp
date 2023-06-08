class Solution {
public:
    vector<int> evenOddBit(int n) {
        int indexPosition = 0;
        int evenCount = 0, oddCount = 0;

        while (n) {
            if (n%2 == 1) {
                if (indexPosition%2 == 1) {
                    oddCount++;
                }
                else {
                    evenCount++;
                }
            }
            n /= 2;
            indexPosition++;
        }
        vector<int> ans;
        ans.push_back(evenCount);
        ans.push_back(oddCount);
        return ans;
    }
};
