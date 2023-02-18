class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        //int m=INT_MIN;
        int j=0, i=0;
        vector<int> ans;
            deque<int>q;
        // if(k==1)
        // {
        //     ans=nums;
        //     return ans;
        // }
        
//         for(int i=0; i<n-k+1; i++)
//         {
//             m=nums[i];
//             for(int j=i; j<i+k; j++)
//             {
//                 m=max(m, nums[j]);
//             }
//             ans.push_back(m);
//         }
//         return ans;
            while(j<n)
            {
                   while(!q.empty() && q.back()<nums[j])
                           q.pop_back();
                    q.push_back(nums[j]);
                    if(j-i+1<k)
                            j++;
                    else if((j-i+1)==k)
                    {
                            ans.push_back(q.front());
                            if(q.front()==nums[i])
                                    q.pop_front();
                            i++;
                            j++;
                    }
            }
            return ans;
    }
};