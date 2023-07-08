class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<int> pairSum(weights.size()-1, 0);
        
        for(int i=0; i<pairSum.size(); i++) {
            pairSum[i] = weights[i] + weights[i+1];
        }

        sort(pairSum.begin(), pairSum.end());

        long minSum = 0;
        long maxSum = 0;
        
        for (int i=0; i<k-1; i++) {
            minSum += pairSum[i];
            maxSum += pairSum[pairSum.size()-1-i];
        }

        return maxSum - minSum;
    }
};
