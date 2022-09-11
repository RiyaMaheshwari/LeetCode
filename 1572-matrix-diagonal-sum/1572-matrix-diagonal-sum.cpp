class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0, q=0;
        int n=mat.size();
        if(mat.size()%2==0)
        {   
            for(int i=0; i<mat.size(); i++)
            {
               for(int j=0; j<mat[i].size(); j++)
               {
                    if(i==j)
                    {
                        s=s+mat[i][j];
                    }
                   else if((i+j)==(n-1))
                   {
                       q=q+mat[i][j];
                   }
               }
            }
            return (s+q);
        }
        else
        {
            for(int i=0; i<mat.size(); i++)
            {
                for(int j=0; j<=mat[i].size(); j++)
                {
                    if(i==j)
                    {
                        s=s+mat[i][j];
                    }
                    else if((i+j)==(n-1))
                    {
                        q=q+mat[i][j];
                    }
                }
            }
            return (s+q);
        }
    }
};