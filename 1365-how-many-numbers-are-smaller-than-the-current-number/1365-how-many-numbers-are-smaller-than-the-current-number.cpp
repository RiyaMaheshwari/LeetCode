class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int c=0;
        vector<int> ans(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            c=0;
            for(int j=0; j<nums.size(); j++)
            {
                if((nums[j]<nums[i])&&(j!=i))
                {
                    c++;
                }
            }
            ans[i]=c;
        }
        return ans;
    }
};