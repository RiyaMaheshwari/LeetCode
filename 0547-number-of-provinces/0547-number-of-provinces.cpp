class Solution {
public:
        void dfs(int node, vector<int> &vis, vector<int> adjList[])
        {
                vis[node]=1;
                for(auto it:adjList[node])
                {
                        if(!vis[it])
                                dfs(it,vis,adjList);
                }
        }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // converting adjacency matrix to adjacency list
            int V=isConnected.size();
            vector<int> adjList[V+1];
            for(int i=0; i<V; i++)
            {
                    for(int j=0; j<V; j++)
                    {
                            if(isConnected[i][j]==1 && i!=j)
                            {
                                    adjList[i+1].push_back(j+1);
                                    adjList[j+1].push_back(i+1);
                            }
                    }
            }
            int c=0;
            vector<int> vis(V+1,0);
            // for(int i=0; i<=V; i++)
            // {
            //        vis[i]=0; 
            // }            
            for(int i=1; i<=V; i++)
            {
                    if(!vis[i]){
                    c++;
                    dfs(i,vis,adjList);
                    }
            }
            return c;
    }
};