class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i, j;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> t;
        for(int i=0; i<m; i++)
        {
            vector<int> temp;
            for(int j=0; j<n; j++)
            {
                temp.push_back(matrix[j][i]);
            }
            t.push_back(temp);
        }
        return t;
    }
};