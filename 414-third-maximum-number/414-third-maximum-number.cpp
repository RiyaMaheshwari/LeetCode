class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        int c=1;
        int s,i;
        sort(nums.begin(), nums.end());
        
        if(n<3)
            return nums[n-1];
        else{
            for(int i=nums.size()-1; i>=1; i--)
            {
                if(nums[i]!=nums[i-1])
                    c++;
                if(c==3)
                    return nums[i-1];
            }
        }
        return nums[n-1];
    }
};