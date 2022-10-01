class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        int max=nums[0];
        int res;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto x: mp)
        {
            if(x.second>mp[max])
            {
                max=x.first;
            }
        }
        return max;
    }
};