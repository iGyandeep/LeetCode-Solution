class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int previous = 0;
        int max = 0;
        for (auto x : gain) {
            previous += x;
            if (previous > max)
                max = previous;
        }
        return max;
    }
};
