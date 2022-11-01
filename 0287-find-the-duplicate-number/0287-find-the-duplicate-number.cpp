class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>map;
        int ans;
        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for(auto i:map)
        {
            if(i.second>1)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};