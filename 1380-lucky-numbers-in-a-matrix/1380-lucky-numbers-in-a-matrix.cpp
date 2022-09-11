class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        vector<int> row(matrix.size());
        vector<int> col(matrix[0].size());
        int rmin = INT_MAX;
        for(int i=0; i<matrix.size(); i++)
        {
           for(int j=0; j<matrix[0].size(); j++)
           {
               if(matrix[i][j]<rmin)
               {
                   rmin = matrix[i][j];
               }
           }
            row[i]=rmin;
            rmin=INT_MAX;
        }
        int cmax=INT_MIN;
        for(int i=0; i<matrix[0].size(); i++)
        {
           for(int j=0; j<matrix.size(); j++)
           {
               if(matrix[j][i]>cmax)
               {
                   cmax = matrix[j][i];
               }
           }
            col[i]=cmax;
            cmax=INT_MIN;
        }
        for(int i=0; i<row.size(); i++)
        {
            for(int j=0; j<col.size(); j++)
            {
                if(row[i]==col[j])
                    ans.push_back(row[i]);
            }
        }
        return ans;
    }
};