class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> binary;
        while (n) {
            int rem = n % 2;
            binary.push_back(rem);
            n /= 2;
        }

        for (int i=0; i<binary.size()-1; i++) {
            if (binary[i] == binary[i+1])
                return false;
        }

        return true;
    }
};
