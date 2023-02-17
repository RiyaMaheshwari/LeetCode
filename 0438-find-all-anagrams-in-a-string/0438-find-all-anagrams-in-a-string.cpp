class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // sort(p.begin(), p.end());
        // int n=s.size(), m=p.size();
        // vector<int> ans;
        // for(int i=0; i<n-m+1; i++)
        // {
        //         string temp = s.substr(i,m);
        //         sort(temp.begin(), temp.end());
        //         if(p==temp)
        //                 ans.push_back(i);
        // }
        // return ans;
            int n=s.size();
            int k=p.size();
            int j=0, i=0;
            vector<int>ans;
            unordered_map<int,int>mp;
            for(int i=0; i<k; i++)
            {
                    mp[p[i]]++;
            }
            // count is for distinct characters in p string
            int count = mp.size();
            while(j<n)
            {
                 // calculation part
                    if(mp.find(s[j])!=mp.end())
                    {
                             mp[s[j]]--;
                             if(mp[s[j]]==0)
                             count--;
                    }
                    if((j-i+1)<k)
                            j++;
                    else if((j-i+1)==k)
                    {
                            // finding ans
                            if(count==0)
                                    ans.push_back(i);
                            if(mp.find(s[i])!=mp.end())
                            {
                                    mp[s[i]]++;
                                    if(mp[s[i]]==1)
                                            count++;
                            }
                            // slide the window
                             i++;
                             j++;
                    }
            }
            return ans;
    }
};