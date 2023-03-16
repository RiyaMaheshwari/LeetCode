class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int>adj[n];
            for(auto it:prerequisites)
            {
                    adj[it[1]].push_back(it[0]);
            }
            vector<int>inDegree(n,0);
            for(int i=0; i<n; i++)
            {
                    for(auto it:adj[i])
                    {
                            inDegree[it]++;
                    }
            }
            queue<int>q;
            for(int i=0; i<n; i++)
            {
                    if(inDegree[i]==0)
                            q.push(i);
            }
            vector<int>ans;
            while(!q.empty())
            {
                    int node=q.front();
                    q.pop();
                    ans.push_back(node);
                    
                    for(auto it:adj[node])
                    {
                            inDegree[it]--;
                            if(inDegree[it]==0)
                            {
                                    q.push(it);
                            }
                    }
            }
            if(ans.size()==n)
                  return ans;
            else
                    return {};
    }
};