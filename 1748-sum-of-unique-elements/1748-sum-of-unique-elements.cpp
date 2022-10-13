class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto x: mp)
        {
            if(x.second==1)
            {
                ans = ans+x.first;
            }
        }
        return ans;
    }
};