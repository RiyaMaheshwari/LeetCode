class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           
        vector<int> ans;
        for (int i=0; i<nums1.size(); i++){
            int j= find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            for (int it=j+1; it<nums2.size(); it++){
                if (nums2[it]>nums2[j]){
                    ans.push_back(nums2[it]);
                    break;
                }
                if (it==nums2.size()-1)ans.push_back(-1);
            }
            if (j==nums2.size()-1)ans.push_back(-1);
        }
        return ans;
    }
};