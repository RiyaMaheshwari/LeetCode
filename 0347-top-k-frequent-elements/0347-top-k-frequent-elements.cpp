class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int, int>>p;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto x: mp)
        {
            p.push_back({x.second, x.first});
        }
        sort(p.rbegin(), p.rend());
        vector<int>ans(k);
        for(int i=0; i<k; i++)
        {
            ans[i]=p[i].second;
        }
        return ans;
    }
};