class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0, j = letters.size()-1;
        int ans = 0;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (letters[mid] == target)
                i = mid + 1;
            else if (letters[mid] < target)
                i = mid + 1;
            else { 
                j = mid - 1;
                ans = mid;
            }
        }
        return letters[ans];
    }
};
