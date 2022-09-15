class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size()-1, c=0;
        for(int i=1; i<n; i++)
        {
            if((nums[i]>nums[0])&&(nums[i]<nums[n]))
            {
                c++;
            }
        }
        return c;
    }
};