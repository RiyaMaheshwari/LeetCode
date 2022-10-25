class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ans="";
        int i;
        int n=s.size();
        for(i=0; i<n; i++)
        {
            if(s[i]==' ')
                continue;
            string temp;
            while(i<n && s[i]!=' ')
            {
                temp=temp+s[i];
                i++;
            }
            v.push_back(temp);
        }
        
        reverse(v.begin(), v.end());
        
        for(i=0; i<v.size(); i++)
        {
            ans=ans+v[i];
            ans=ans+' ';
        }
        ans.pop_back();
        return ans;
    }
};