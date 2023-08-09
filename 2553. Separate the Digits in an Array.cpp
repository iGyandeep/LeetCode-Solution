/*  Appraoch - 1  */


class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] < 10)
                ans.push_back(nums[i]);

            else {
                vector<int> temp;
                while (nums[i] != 0) {
                    temp.push_back(nums[i]%10);
                    nums[i]/=10;
                }

                for (int j=temp.size()-1; j>=0; j--) {
                    ans.push_back(temp[j]);
                }
            }
        }

        return ans;
    }
};



/*  Approach - 2  */

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (auto n : nums) {
            string temp = to_string(n);
            for (auto x : temp) {
                ans.push_back(x-'0');
            }
        }
        return ans;
    }
};
