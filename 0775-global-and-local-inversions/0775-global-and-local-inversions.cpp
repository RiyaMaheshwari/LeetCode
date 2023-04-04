class Solution {
public:
        // int local(vector<int> nums)
        // {
        //         int c1=0;
        //         for(int i=0; i<nums.size()-1; i++)
        //         {
        //                 if(nums[i]>nums[i+1])
        //                         c1++;
        //         }
        //         return c1;        
        // }
        // int global(vector<int> nums)
        // {
        //         int c2=0;
        //         int i=0;
        //         int n=nums.size();
        //         int j=n-1;
        //         while(i<j)
        //         {
        //                 if(nums[i]>nums[j])
        //                 {
        //                         c2++;
        //                         // j--;
        //                         i++;
        //                 }
        //                 else
        //                 {
        //                         j--;
        //                 }
        //         }
        //         return c2;
        // }
    bool isIdealPermutation(vector<int>& nums) {
//         int l=local(nums);
//             int g=global(nums);
//             // cout<<l<<endl;
//             // cout<<g;
//             if(l==g)
//                     return true;
          
//             return false;
            for(int i=0; i<nums.size(); i++)
            {
                    if(abs(nums[i]-i)>1)
                            return false;
            }
            return true;
    }
};