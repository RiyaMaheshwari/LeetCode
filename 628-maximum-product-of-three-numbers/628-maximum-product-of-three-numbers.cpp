class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=nums[0]*nums[1]*nums[2];
        int b=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int c=nums[0]*nums[1]*nums[nums.size()-1];
        int ans= max({a,b,c});
        return ans;
    }
};