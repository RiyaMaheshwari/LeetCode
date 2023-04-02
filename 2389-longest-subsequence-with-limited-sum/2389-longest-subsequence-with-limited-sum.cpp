class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
            sort(nums.begin(),nums.end());
            // vector<int> arr;
            for(int i=1; i<nums.size(); i++)
            {
                    nums[i]+=nums[i-1];
            }
            for(auto x:queries)
            {
                    int l=0;
                    int h=nums.size()-1;
                    int k=0;
                    while(l<=h)
                    {
                            int mid=l+(h-l)/2;
                            if(nums[mid]<=x)
                            {
                                    k=mid+1;
                                    l=mid+1;
                            }
                            else
                                    h=mid-1;
                    }
                    ans.push_back(k);
            }
            return ans;
    }
};