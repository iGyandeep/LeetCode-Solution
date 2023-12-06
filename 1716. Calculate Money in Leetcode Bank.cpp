class Solution {
public:
    int totalMoney(int n) {
        
        int money = 0;
        int week = n / 7;
        int day = n % 7;
        
        for (int i=1; i<= week; i++)
            money += (i + 3) * 7;
        for (int j=1; j<=day; j++)
            money += ++week;
        return money;
    }
};
