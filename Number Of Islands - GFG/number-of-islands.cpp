//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {

  public:

    

    void dfs(vector<vector<int>> &mat, vector<vector<bool>> &vis, 

    int row, int col, int x, int y)

    {

        if(x < 0 || x >= row || y < 0 || y >=col)

            return;

        

        if(vis[x][y] || mat[x][y] == 0)

            return;

        

        vis[x][y] = true;

        

        dfs(mat, vis, row, col, x-1, y); // up

        dfs(mat, vis, row, col, x+1, y); // down

        dfs(mat, vis, row, col, x, y-1); // left

        dfs(mat, vis, row, col, x, y+1); // right

    }

    

    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {

        // code here

        vector<int> res;

        vector<vector<int>> mat(n, vector<int>(m));

        

        for(auto &idx: operators)

        {

            int x = idx[0];

            int y = idx[1];

            int count = 0;

            mat[x][y] = 1;

            vector<vector<bool>> vis(n, vector<bool>(m));

            

            for(int i = 0; i < n; i++)

            {   

                for(int j = 0; j < m; j++)

                {

                    if(vis[i][j]==false && mat[i][j] != 0)

                    {

                        dfs(mat, vis, n, m , i, j);

                        count++;

                    }

                }

            }

            res.push_back(count);

        }

        

        return res;

    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends