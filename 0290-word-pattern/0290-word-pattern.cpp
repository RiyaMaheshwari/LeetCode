class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
            string temp="";
            for(int i=0; i<s.size(); i++)
            {
                    temp+=s[i];
                    if(s[i+1]==' ')
                    {
                         v.push_back(temp);
                         temp="";
                         i++;
                         continue;
                    }
                    if(i==s.size()-1)
                    {
                            v.push_back(temp);
                            break;
                    }
            }
             unordered_map<char, string> m1;
            unordered_map<string, char> m2;
            if(pattern.size()!=v.size())
                    return false;
            int n=v.size();
            int i=0;
            while(i<n)
            {
                   if(m1.find(pattern[i])==m1.end() && m2.find(v[i])==m2.end()){
                           m1[pattern[i]]=v[i];
                           m2[v[i]]=pattern[i];
                   }
                    else
                    {
                            if(m2[v[i]]!=pattern[i] && m1[pattern[i]]!=v[i])
                                    return false;
                    }
                    i++;
            }
            return true;
            
    }
};