class Solution {
public:
    int mySqrt(int x) {
        
        long long int start = 0;
        long long int end = x;
        long long int mid = start + (end - start) / 2;
        long long int ans;
        
        while (start <= end)
        {
            if ((mid * mid) == x)
                return mid;
            else if ((mid * mid) > x)
                end = mid - 1;
            else
            {
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};
