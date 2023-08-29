class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        
        int minHour  = 0;
        int penalty  = count(begin(customers), end(customers), 'Y');
        
        int minPenalty = penalty;

        for(int i = 0; i< n ; i++) {
            
            if(customers[i] == 'Y') {
                penalty--;
            } else {
                penalty++;
            }
            
            if(penalty < minPenalty) {
                minHour = i+1;
                minPenalty = penalty;
            }
        }
        
        return minHour;
    }
};
