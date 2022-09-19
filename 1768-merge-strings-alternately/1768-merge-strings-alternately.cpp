class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int m = word1.size();
        int n= word2.size();
        int minimum = min(m,n);
        for(int i=0; i<minimum; i++)
        {
            ans += word1[i];
            ans += word2[i];
        }
        if(word1.size()<word2.size())
        {
            for(int i=word1.size(); i<word2.size(); i++)
            {
                ans += word2[i];
            }
            return ans;
        }
        else
        {
            for(int i=word2.size(); i<word1.size(); i++)
            {
                ans += word1[i];
            }
            return ans;
        }
        return "";
    }
};