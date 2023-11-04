class Solution {
public:
    int convertTime(string current, string correct) {
        //Convert and Seperate the time in hour and minute 
        int h1 = (current[0] - '0') * 10 + (current[1] - '0');
        int h2 = (correct[0] - '0') * 10 + (correct[1] - '0');
        int m1 = (current[3] - '0') * 10 + (current[4] - '0');
        int m2 = (correct[3] - '0') * 10 + (correct[4] - '0');

        //Convert the time in minutes 
        int min_1 = h1*60 + m1;
        int min_2 = h2*60 + m2;

        int time_Difference = min_2 - min_1;
        int arr[4] = {60, 15, 5, 1};
        int ans = 0;

        for (int i=0; i<4; i++) {
            ans += time_Difference / arr[i];
            time_Difference %= arr[i];
        }
        
        return ans;
    }
};
