class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mid;
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums[h]!=nums[h-1])
            return nums[h];
        if(nums[0]!=nums[1])
            return nums[0];
        while(l<=h)
        {
            mid = l+(h-l)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
            else if(((mid%2 ==1) && nums[mid]==nums[mid-1])||((mid%2 ==0)&&nums[mid]==nums[mid+1]))
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
};