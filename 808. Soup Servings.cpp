class Solution {
public:

    vector<pair<int, int>> serves{{100, 0}, {75, 25}, {50, 50}, {25, 75}};
    vector<vector<double>> t;

    double probability_Of_A(double a, double b) {
        if (a<=0 && b<=0)
            return 0.5;
            
        if (a <= 0)
            return 1.0;
        if (b <= 0)
            return 0.0;

        if (t[a][b] != -1.0)
            return t[a][b];

        double probability_Ans = 0.0;

        for (auto &p : serves) {
            double a_serves = p.first;
            double b_serves = p.second;

            probability_Ans += 0.25 * probability_Of_A(a-a_serves, b-b_serves);
        }

        return t[a][b] = probability_Ans;
    }
    double soupServings(int n) {
        if (n >= 6000)
            return 1.0;

        t.resize(n+1, vector<double>(n+1, -1.0));
        return probability_Of_A(n, n);
    }
};
