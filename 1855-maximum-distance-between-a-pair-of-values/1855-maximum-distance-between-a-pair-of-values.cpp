class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0, m=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] <= nums2[j])
            {
                m=max(m,j-i);
                j++;
            }
            else if(nums1[i]>nums2[j]){
                i++;
                while(i>j)
                    j++;
            }
        }
        return m;
    }
};