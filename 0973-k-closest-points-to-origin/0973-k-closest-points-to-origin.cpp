class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        vector<vector<int>>ans;
            int n=p.size();
            for(int i=0; i<n; i++)
            {
                    pq.push({(p[i][0]*p[i][0])+(p[i][1]*p[i][1]),{p[i][0],p[i][1]}});
                    if(pq.size()>k)
                            pq.pop();
            }
            while(pq.size())
            {
                    ans.push_back({pq.top().second.first,pq.top().second.second});
                    pq.pop();
            }
            return ans;
    }
};