class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            // using extra space
            int n=nums.size();
            // unordered_map<int, int>freq;
            // for(int i=0; i<n; i++)
            // {
            //         freq[nums[i]]++;
            // }
            // int max = *max_element (nums.begin(), nums.end());
            // if(max<0)
            //         return 1;
            // for(int i=1; i<max; i++)
            // {
            //         if(freq[i]==0)
            //                 return i;
            // }
            // return max+1;
            int c=1;
            sort(nums.begin(), nums.end());
            for(int i=0; i<n; i++)
            {
                    if(nums[i]<c)
                            continue;
                    if(nums[i]==c)
                            c++;
                    else 
                            return c;
            }
            return c;
    }
};