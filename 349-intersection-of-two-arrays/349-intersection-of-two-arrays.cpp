class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(), n=nums2.size();
        set<int> s;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(nums2[i]==nums1[j])
                    {
                        s.insert(nums2[i]);
                    }
                }
            }
        std::vector<int> v(s.size());
        std::copy(s.begin(), s.end(), v.begin());
        return v;
    }
};