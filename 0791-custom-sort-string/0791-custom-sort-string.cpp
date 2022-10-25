class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<int, int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        string ans="";
        for(int i=0; i<order.size(); i++)
        {
            if(mp.find(order[i])!=mp.end())
            {
                while(mp[order[i]])
                {
                    ans=ans+order[i];
                    mp[order[i]]--;
                }
            }
        }
        for(auto x: s)
        {
            if(mp[x]!=0)
                ans=ans+x;
        }
        return ans;
    }
};