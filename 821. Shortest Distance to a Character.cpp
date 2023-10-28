class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> position;
        vector<int> answer;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
                position.push_back(i);
        }
        
        for(int i=0; i<s.size(); i++)
        {
            int shortest_dist = INT_MAX;
            for(int j=0; j<position.size(); j++)
            {
                shortest_dist = min(shortest_dist, abs(i-position[j]));
            }
            answer.push_back(shortest_dist);
        }
        
        return answer;
    }
};
