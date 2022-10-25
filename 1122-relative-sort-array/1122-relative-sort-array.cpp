class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int>mp;
        for(int i=0; i<arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }
        vector<int> ans, temp;
        for(int i=0; i<arr2.size(); i++)
        {
            int key=arr2[i];
            if(mp.find(key)!=mp.end())
            {
                while(mp[arr2[i]])
                {
                    ans.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
            }
        }
        for(auto x: mp)
        {
            while(x.second!=0)
            {
                temp.push_back(x.first);
                x.second--;
            }
        }
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
};