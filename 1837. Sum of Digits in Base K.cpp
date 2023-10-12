class Solution {

    public int findSum(int num) {
        int sum = 0;
        while (num != 0) {
            int rem = num % 10;
            sum += rem;
            num /= 10;
        }
        return sum;
    }
    public int sumBase(int n, int k) {
        
        int num_with_base_k = 0, i = 1;
        while (n != 0) {
            int rem = n % k;
            num_with_base_k += rem * i;
            i *= 10;
            n /= k;
        }

        return findSum(num_with_base_k);
    }
}
