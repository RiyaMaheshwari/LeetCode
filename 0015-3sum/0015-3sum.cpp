class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        map<vector<int>,int> m;
        for(int i=0; i<n-2; i++)
        {
                int l=i+1;
                int h=n-1;
                int x=-nums[i];
                while(l<h)
                {
                        if(nums[l]+nums[h]==x && l!=h)
                        {
                                vector<int>v;
                                v.push_back(nums[i]);
                                v.push_back(nums[l]);
                                v.push_back(nums[h]);
                                if(m.find(v)==m.end())
                                {
                                        m[v]++;
                                        ans.push_back(v);
                                }
                                 l++;
                                h--;
                        }
                        else if((nums[l]+nums[h])<x)
                                l++;
                        else
                                h--;
                }
        }
            return ans;
    }
};