class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>map;
        int ans;
        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for(int i:nums)
        {
            if(map[i]>1)
            {
                ans=i;
            }
        }
        return ans;
    }
};