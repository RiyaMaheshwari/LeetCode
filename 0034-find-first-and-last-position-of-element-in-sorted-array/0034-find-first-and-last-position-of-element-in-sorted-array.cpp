class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int res=-1;
        int res1=-1;
        //vector<int> arr;
        //int k;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                res=mid;
                h=mid-1;
            }
            else if(nums[mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        l=0;
        h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
           /* if(nums[mid]<=target)
            {
                if(nums[mid]==target)
                 res1=mid;
                l=mid+1;
            }
            else
                h=mid-1;*/
            if(nums[mid]==target)
            {
                res1=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return {res,res1};
    }
};