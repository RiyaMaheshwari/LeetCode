class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>ump;
        for(int i=0; i<nums.size(); i++)
        {
            ump[nums[i]]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b)
             {return ump[a]!=ump[b] ? ump[a]<ump[b] : a>b;});
        
        return nums;
    }
};