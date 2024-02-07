class Solution {
public:
    typedef pair<char, int> P;
    string frequencySort(string s) {
        vector<P> vec(123);
        
        for(char &ch : s) {
            int freq = vec[ch].second;
            vec[ch] = {ch, freq+1};
        }
        
        auto comp = [&](P &p1, P &p2) {
            return p1.second > p2.second;
        };
        
        sort(begin(vec), end(vec), comp);
        
        string result = "";
        
        for(int i = 0; i <= 122; i++) {
            result += string(vec[i].second, vec[i].first);
        }
        return result;
    }
};
