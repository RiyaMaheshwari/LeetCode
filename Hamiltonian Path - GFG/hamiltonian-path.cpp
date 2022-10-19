//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    bool *visited;
    vector<int> *adj;
    public:
    bool dfs(int src,int inPath, int v){
        visited[src]=true;
        if(inPath==v)
            return true;
        for(auto it : adj[src]){
            if(!visited[it] && dfs(it,inPath+1,v))
                return true;
        }
        // for backtracking
        visited[src]=false;
        return false;
    }
      bool check(int N,int M,vector<vector<int>> E)
    {   
        visited = new bool[N+1];
        adj = new vector<int>[N+1];
        for(int i=0;i<M;i++)
            adj[E[i][0]].push_back(E[i][1]),adj[E[i][1]].push_back(E[i][0]);
        for(int i=1;i<=N;i++)
            visited[i]=false;
        for(int i=1;i<=N;i++)
            if(dfs(i,1,N))
                return true;
        return false;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends