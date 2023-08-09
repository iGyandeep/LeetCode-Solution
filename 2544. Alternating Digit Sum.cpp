class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        vector<int> temp;

        while (n != 0) {
            temp.push_back(n%10);
            n /= 10;
        }
        int e = 0, o = 0;
        for (int i=temp.size()-1; i>=0; i--) {
            if (i%2 == 0) {
                e += temp[i];
            }

            else {
                o += temp[i];
            }
        }

        if ((temp.size()-1)%2 == 0)
            return e-o;
        else
            return o-e;
    }
};
