class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        vector<int> ans;
        for(int i=0; i<n1.size(); i++)
        {
            int check = 0;
            for(int j=0; j<n2.size(); j++)
            {
                if(n2[j] == n1[i])
                {
                    for(int k=j+1; k<n2.size(); k++)
                    {
                        if(n2[k] > n1[i]) 
                        {
                            check = 1;
                            ans.push_back(n2[k]);
                            break;
                        }
                    }
                }
                if(check)
                    break;
            }
            if(!check)
                ans.push_back(-1);
        }
        return ans;
    }
};
