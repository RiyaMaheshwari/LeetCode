class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            for(int i=0; i<nums.size(); i++)
            {
                    pq.push({nums[i],i});
            }
            int n=nums.size();
            vector<int>vis(n,0);
            long long score=0;
            while(pq.size()>0)
            {
                    int ele = pq.top().first;
                    int ind = pq.top().second;
                    if(vis[ind]==0)
                    {
                            vis[ind]=1;
                            if(ind>0)
                            vis[ind-1]=1;
                            if(ind<(n-1))
                            vis[ind+1]=1;
                            score+=ele;
                    }
                    pq.pop();
            }
            return score;
    }
};