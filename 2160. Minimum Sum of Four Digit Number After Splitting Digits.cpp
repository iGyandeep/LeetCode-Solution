class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;
        int n = num;
        while (n != 0) {
            temp.push_back(n%10);
            n /= 10;
        }
        
        sort(temp.begin(), temp.end());

        int x = 0, y = 0;
        x = (temp[0]*10) + temp[3];
        y = (temp[1]*10) + temp[2];

        return (x + y);
    }
};
