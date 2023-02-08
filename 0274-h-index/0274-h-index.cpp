class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        vector<int> v(n+1,0);
            for(int i=0; i<n; i++)
            {
                    if(citations[i]>=n)
                            v[n]++;
                    else
                            v[citations[i]]++;
            }
            int c=0;
            for(int i=n; i>=0; i--)
            {
                    c+=v[i];
                    if(c>=i)
                            return i;
            }
            return 0;
    }
};