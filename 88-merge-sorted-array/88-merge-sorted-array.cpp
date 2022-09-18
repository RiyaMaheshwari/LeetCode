class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s = n-1;
        for(int i=nums1.size()-1; i>=0; i--)
        {
            if(s<0)
                break;
            if(nums1[i]==0)
            {
                nums1[i]=nums2[s];
                s--;
            }
            else
                break;
        }
        sort(nums1.begin(), nums1.end());
    }
};