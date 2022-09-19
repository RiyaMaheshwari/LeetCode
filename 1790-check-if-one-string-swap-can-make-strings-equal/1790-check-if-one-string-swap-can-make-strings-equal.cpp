class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        if(s1.size()!=s2.size())
            return false;
        vector<int> ans;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            {
                ans.push_back(i);
            }
        }
        if(ans.size()==0)
            return true;
        else if(ans.size()>2)
            return false;
        else if(ans.size()==2)
        {
            if(s2[ans[0]]==s1[ans[1]] && s2[ans[1]]==s1[ans[0]])
                return true;
        }
        return false;
    }
};