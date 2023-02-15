class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            // normal approach
        // unordered_map<int,int>mp;
        // vector<pair<int, int>>p;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     mp[nums[i]]++;
        // }
        // for(auto x: mp)
        // {
        //     p.push_back({x.second, x.first});
        // }
        // sort(p.rbegin(), p.rend());
        // vector<int>ans(k);
        // for(int i=0; i<k; i++)
        // {
        //     ans[i]=p[i].second;
        // }
        // return ans;
            
            // using heap
            unordered_map<int, int>mp;
            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
            vector<int>ans;
            for(int i=0; i<nums.size(); i++)
            {
                    mp[nums[i]]++;
            }
            for(auto x:mp)
            {
                   pq.push({x.second,x.first});
                    if(pq.size()>k)
                            pq.pop();
            }
            while(pq.size()!=0)
            {
                  ans.push_back(pq.top().second);
                    pq.pop();
            }
            return ans;
    }
};