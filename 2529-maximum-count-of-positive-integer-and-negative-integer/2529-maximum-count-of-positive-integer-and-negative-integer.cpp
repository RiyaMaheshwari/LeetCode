class Solution {
public:
    int CountofNegative(vector<int>& nums) {
        // int c1=0;
        //     int c2=0;
        //     for(int i=0; i<nums.size(); i++)
        //     {
        //             if(nums[i]<0)
        //                     c1++;
        //             else if(nums[i]>0)
        //                     c2++;
        //     }
        //     return max(c1,c2);
           int count=0;
        int start=0;
        int end=nums.size()-1;
        int mid=start+ (end-start)/2;
        while(start <= end){
            if(nums[mid]<0)
            {
                count=mid;
                start=mid+1;
            }
            else if (nums[mid]>=0)
            {
                
                end = mid -1;
            }
            mid=start+ (end-start)/2;
        }
        //step2
        return count;
    }
    //counting the positive numbers
    /*
        1.geting the inddex of the first positive number.
        2.deducting the number from the size of the vector which leads to count of positive numbers.

    */
    int CountofPositive(vector<int>nums){
        //Step1.
        int firstPositive=0;
        int start=0;
        int end=nums.size()-1;
        int mid=start+ (end-start)/2;
        while(start <= end){
            if(nums[mid]>0)
            {
                firstPositive=mid;
                end=mid-1;
            }
            else if (nums[mid]<=0)
            {
                
                start = mid +1;
            }
            mid=start+ (end-start)/2;
        }
        //Step 2.
        int pcount=nums.size()-firstPositive;
        return pcount ;
    }
    int maximumCount(vector<int>& nums) {
        //Special Case when All the Elements are zero than return 0
        if(nums[0]==0 && nums[nums.size()-1]==0)
        {
            return 0;
        }
        int pcount=CountofPositive(nums);
        int ncount=CountofNegative(nums);
        //returing the max count between positive and negative 
        int ans=max(pcount , ncount+1);
        return ans;
    }
};