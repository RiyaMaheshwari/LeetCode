class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
            int i=0; 
            int j=0;
            int k=0;
            //set<string>st;
            unordered_map<char,int>mp;
            // unordered_map<string,int>mp2;
           // string ans="";
            while(j<n)
            {
                    mp[s[j]]++;
                    if(mp.size()==j-i+1)
                    {
                           // ans+=s[j];
                            j++;
                    }
                    else if(mp.size()<j-i+1)
                    {
                            k++;;
                            while(i!=j)
                            {
                                    mp[s[i]]--;
                                    if(mp[s[i]]==0)
                                            mp.erase(s[i]);
                                    i++;
                            }
                            j++;
                    }
            }
           return k+1;
    }
};