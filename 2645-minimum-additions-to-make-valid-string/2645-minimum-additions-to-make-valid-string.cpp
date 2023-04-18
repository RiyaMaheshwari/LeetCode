class Solution {
public:
    int addMinimum(string word) {
            int req=0;
            int i=0;
            int n=word.size();
            while(i<n)
            {
                    int valid=0;
                    if(word[i]=='a')
                    {
                            valid++;
                            i++;
                    }
                    if(i<n && word[i]=='b')
                    {
                            valid++;
                            i++;
                    }
                    if(i<n && word[i]=='c')
                    {
                            valid++;
                            i++;
                    }
                    req+=3-valid;
            }
            return req;
    }
};