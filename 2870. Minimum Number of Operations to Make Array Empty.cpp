class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;

        for (int &i : nums) {
            mp[i]++;
        }

        int countMinOperation = 0;

        for (auto &it : mp) {
            int freq = it.second;
            
            if (freq == 1)
                return -1;
            
            countMinOperation += ceil((double)freq/3);
        }

        return countMinOperation;
    }
};
