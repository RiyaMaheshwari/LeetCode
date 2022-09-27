class Solution {
public:
    int firstUniqChar(string s) {
        int c[200]={0};
        for(int i=0; i<s.length(); i++)
            c[s[i]]++;
        for(int i=0; i<s.length(); i++)
        {
            if(c[s[i]]==1)
                return i;
        }
        return -1;
    }
};