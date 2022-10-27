class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0, k=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans(n1+n2,0);
        while(i<n1&& j<n2)
        {
            if(nums1[i]<=nums2[j])
                ans[k++]=nums1[i++];
            else
                ans[k++]=nums2[j++];
        }
        while(i<nums1.size())
        {
            ans[k]=nums1[i];
            i++;
            k++;
        }
        while(j<nums2.size())
        {
            ans[k]=nums2[j];
            j++;
            k++;
        }
        int n=nums1.size()+nums2.size();
        if(n%2!=0)
            return ans[n/2];
        else
            return (ans[n/2]+ans[n/2-1])/2.0;
    }
};