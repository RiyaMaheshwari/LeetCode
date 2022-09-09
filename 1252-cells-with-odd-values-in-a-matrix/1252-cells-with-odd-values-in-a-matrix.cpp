class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int mat[m][n], c=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                mat[i][j]=0;
            }
        }
        for(int i=0; i<indices.size(); i++)
        {
            int row=indices[i][0];
            int col=indices[i][1];
            for(int r=0; r<n; r++)
            {
                mat[row][r]++;
            }
            for(int c=0; c<m; c++)
            {
                mat[c][col]++;
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int a = mat[i][j];
                if((a%2)!=0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};