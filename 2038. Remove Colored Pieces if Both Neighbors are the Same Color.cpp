class Solution {
public:
    bool winnerOfGame(string colors) {
        if (colors.size() == 2)
            return false;

        vector<int> moves_count(2, 0);

        for (int i=1; i<colors.size()-1; i++) {
            if (colors[i] == 'A' && colors[i-1] == 'A' && colors[i+1] == 'A') {
                moves_count[0]++;
            }

            if (colors[i] == 'B' && colors[i-1] == 'B' && colors[i+1] == 'B') {
                moves_count[1]++;
            } 
        }

        if (moves_count[0] > moves_count[1])
            return true;
        else
            return false;
    }
};
