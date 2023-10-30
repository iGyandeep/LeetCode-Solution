class Solution {
public:
  //  Function to count the bit
    static int countOneBit(int num) {
        int count = 0;
        while (num != 0) {
            if (num%2 == 1)
                count++;
            num /= 2;
        }
        return count;
    }

  //  Comparasition on the basis of the no. one of bits OR if no. of one bits are equal then comparasition is done on the actual value.
    static bool compare (int a, int b) {
        int bitCountA = countOneBit(a);
        int bitCountB = countOneBit(b);

        if (bitCountA == bitCountB) 
            return a < b;
        else
            return bitCountA < bitCountB;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};
