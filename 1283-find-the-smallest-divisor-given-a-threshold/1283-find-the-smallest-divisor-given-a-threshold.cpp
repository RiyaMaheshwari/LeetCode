class Solution {
public:
    bool isValid(vector<int>& nums, int threshold, int mid)
    {
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            sum=sum+(nums[i]/mid)+((nums[i]%mid)!=0);
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=*max_element(nums.begin(), nums.end());
        int mid;
        int res=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(isValid(nums, threshold, mid)==true)
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};