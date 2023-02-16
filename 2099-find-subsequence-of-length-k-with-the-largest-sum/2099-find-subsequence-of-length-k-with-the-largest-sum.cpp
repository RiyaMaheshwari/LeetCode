class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            for(int i=0; i<nums.size(); i++)
            {
                    pq.push({nums[i],i});
                    if(pq.size()>k)
                            pq.pop();
            }
            vector<pair<int,int>>v;
            while(pq.size())
            {
                    v.push_back({pq.top().second,pq.top().first});
                    pq.pop();
            }
            sort(v.begin(),v.end());
            vector<int>ans;
            for(int i=0; i<v.size(); i++)
            {
                    ans.push_back(v[i].second);
            }
            return ans;
    }
};