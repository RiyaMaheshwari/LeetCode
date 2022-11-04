class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string res="";
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
            res=res+v[i];
            res=res+' ';
        }
        res.pop_back();
        return res;
    }
};
