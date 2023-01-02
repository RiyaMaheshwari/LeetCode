class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
            if(n==1)
                    return true;
            int i=0;
            if(word[i]>='A' && word[i]<='Z' && word[i+1]>='A' && word[i+1]<='Z')
            {
                    for(i=2; i<n; i++)
                    {
                            if(word[i] >= 'a' && word[i] <= 'z')
                                    return false;
                    }
            }
            int j=0;
            if(word[j]>='A' && word[j]<='Z'  && word[j+1]>='a' && word[j+1]<='z')
            {
                    for(j=2; j<n; j++)
                    {
                            if(word[j] >= 'A' && word[j] <= 'Z')
                                    return false;
                    }
            }
            int k=0;
            if(word[k]>='a' && word[k]<='z'  && word[k+1]>='a' && word[k+1]<='z')
            {
                    for(k=2; k<n; k++)
                    {
                            if(word[k] >= 'A' && word[k] <= 'Z')
                                    return false;
                    }
            }
            int s=0;
            if(word[s]>='a' && word[s]<='z')
            {
                    for(s=1; s<n; s++)
                    {
                            if(word[s]>='A' && word[s]<='Z')
                                    return false;
                    }
            }
            return true;
    }
};