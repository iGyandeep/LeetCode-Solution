class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int ans=0;
        int i=0,l=0;
        int cnt=0;
        while(i<s.size())
        {
            if(s[i]=='T')
                cnt++;
 
            while(cnt>k)
            {
                if(s[l]=='T')
                    cnt--;
 
                l++;
            }
 
            ans=max(ans,i-l+1);
            i++;
        }
 
        cnt=0;
        l=0;
        i=0;
        while(i<s.length())
        {
            if(s[i]=='F')
                cnt++;
 
            while(cnt>k)
            {
                if(s[l]=='F')
                    cnt--;
 
                l++;
            }
 
            ans=max(ans,i-l+1);
            i++;
        }
 
        return ans;
    }
};
