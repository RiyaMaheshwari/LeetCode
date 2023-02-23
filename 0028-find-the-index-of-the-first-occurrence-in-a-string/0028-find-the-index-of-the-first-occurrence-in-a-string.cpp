class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int k=needle.size();
            for(int i=0; i<=n-k; i++)
            {
                   string s = haystack.substr(i,k);
                    if(s==needle)
                            return i;
            }
            return -1;
    }
};