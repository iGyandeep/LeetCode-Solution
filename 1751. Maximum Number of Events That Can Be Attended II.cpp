class Solution {
public:
    int n;
    vector<vector<int>> t;
    int solve(vector<vector<int>>& events, int i, int k) {
        
        if(k <= 0 || i >= n)
            return 0;
        
        int start = events[i][0];
        int end   = events[i][1];
        int value = events[i][2];
        
        if(t[i][k] != -1)
            return t[i][k];
        
        // finding the next event which we can attend
        int j = i+1;
        for(; j < n; j++) {
            if(events[j][0] > events[i][1])
                break;
        }
        
        int take = value + solve(events, j, k-1);
        int skip = solve(events, i+1, k);
        
        return t[i][k] = max(take, skip);
        
    }
    
    int maxValue(vector<vector<int>>& events, int k) {
        sort(begin(events), end(events));
        
        n = events.size();
        
        t.resize(n+1, vector<int>(k+1, -1));
        
        return solve(events, 0, k);
    }
};
