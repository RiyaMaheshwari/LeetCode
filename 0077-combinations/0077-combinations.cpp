class Solution {
public:
        void f(int i, vector<int> &ds, vector<vector<int>> &ans, int k, int n)
        {
                if(i>n)
                {
                        if(ds.size()==k)
                                ans.push_back(ds);
                        return;
                }
                ds.push_back(i);
                f(i+1, ds, ans, k, n);
                ds.pop_back();
                f(i+1, ds, ans, k, n);
        }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
            vector<int> ds;
            f(1, ds, ans, k, n);
            return ans;
    }
};