class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;
        for (int i=0; i<deck.size(); i++) {
            mp[deck[i]]++;
        }

        int GCD = mp[deck[0]];
        for (auto i : mp) {
            GCD = gcd(GCD, i.second);
        }

        return GCD != 1;
    }
};
