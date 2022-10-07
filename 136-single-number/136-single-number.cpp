class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k;
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for(auto x: map)
        {
            if(x.second==1)
            {
                k=x.first;
            }
        }
        return k;
    }
};