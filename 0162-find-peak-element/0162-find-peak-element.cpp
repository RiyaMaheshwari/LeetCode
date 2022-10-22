class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;  
        int h=nums.size()-1;
        int mid;
        if(nums.size()==1)
            return 0;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if((mid>0) && (mid<h))
            {
                if((nums[mid]>nums[mid+1]) && (nums[mid]>nums[mid-1]))
                    return mid;
                else if(nums[mid-1]>nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            else if(mid==0)
            {
                if(nums[0]>nums[1])
                    return 0;
                else
                    return 1;
            }
            else if(mid==h)
            {
                if(nums[h]>nums[h-1])
                    return h;
                else
                    return h-1;
            }
        }
        return mid;
    }
};