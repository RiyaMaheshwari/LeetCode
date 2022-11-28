class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> ans;
         vector<pair<int,int>> soldiers;
        int c;
        for(int i=0; i<n; i++)
        {
            c=0;
            for(int j=0; j<m; j++)
            {
                c=c+mat[i][j];
            }
            soldiers.push_back(make_pair(c,i));
        }
        sort(soldiers.begin(), soldiers.end());
        for(int i=0; i<k; i++){
            ans.push_back(soldiers[i].second);
        }
        return ans;
    }
};