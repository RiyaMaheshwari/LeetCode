class Solution {
public:
    int captureForts(vector<int>& f) {
        int n=f.size(), c=1, ans=0;
            for(int i=1; i<n; i++)
            {
                    if(f[i]==f[i-1])
                            c++;
                    else
                    {
                            if(f[i-1]==0 && (i-c-1)>=0 && ((f[i]==1 && f[i-c-1]==-1)|| (f[i]==-1 && f[i-c-1]==1)))
                                    ans = max(ans,c);
                            c=1;
                    }
            }
            return ans;
    }
};