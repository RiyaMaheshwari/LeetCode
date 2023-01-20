class Solution {
public:
        void f(int i, vector<int> &ds, vector<vector<int>> &ans, int n, vector<int> nums, map<vector<int>, int> &m)
        {
                if(i==n)
                {
                        if(ds.size()>=2)
                        {
                                if(m.find(ds)==m.end()){
                                   ans.push_back(ds);
                                   m[ds]=1;
                                }
                        }
                        return;
                }
                
                if(ds.size()==0 || ds.back()<=nums[i])
                {
                        ds.push_back(nums[i]);
                        f(i+1, ds, ans, n, nums, m);
                        ds.pop_back();
                }
                f(i+1, ds, ans, n, nums, m);
        }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> ds;
            vector<vector<int>> ans;
            map<vector<int>, int> m;;
            int n=nums.size();
            f(0, ds, ans, n, nums, m);
            
            return ans;
    }
};