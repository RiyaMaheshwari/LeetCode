class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                return 0;
                break;
            }
            if(nums[i]<0)
            {
                c++;
            }
        }
        if(c%2!=0)
            return -1;
        else
            return 1;
        
    }
};