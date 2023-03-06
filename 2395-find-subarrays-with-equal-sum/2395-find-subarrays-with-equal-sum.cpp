class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> s;
            int n=nums.size();
            int sum;
            for(int i=0; i<n-1; i++)
            {
                    sum=nums[i]+nums[i+1];
                    if(s.find(sum)!=s.end())
                            return true;
                    else
                            s.insert(sum);
            }      
            return false;
    }
};