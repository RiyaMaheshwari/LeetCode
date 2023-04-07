class Solution {
public:int c=0;
 bool dfs(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& visit){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || i>n-1 || j<0 || j>m-1) return false;
        if(grid[i][j]==0 || visit[i][j]) return true;
        visit[i][j]=1;
        c++;
        bool a=dfs(grid,i,j-1,visit);
        bool b=dfs(grid,i-1,j,visit);
        bool c=dfs(grid,i,j+1,visit);
        bool d=dfs(grid,i+1,j,visit);
        if(a && b && c && d) {
            return true;
        }
        return false;


   }
    int numEnclaves(vector<vector<int>>& grid) {
          int n=grid.size();
        int m=grid[0].size();
         int ans=0;
          vector<vector<int>> visit(n,vector<int>(m,0));
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(!visit[i][j] && grid[i][j]==1){
                      c=0;
                      if(dfs(grid,i,j,visit)) {
                          ans+=c;
                      }
                  }
              }
          }
          return ans;
    }
};