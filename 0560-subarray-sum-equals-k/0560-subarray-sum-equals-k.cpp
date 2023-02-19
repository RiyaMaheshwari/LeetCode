class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            // int i=0, j=0;
            // int ans=0;
             int n=nums.size();
            // if(n==1)
            // {
            //         if(k<nums[0])
            //           return ans;      
            // }
            // while(j<n)
            // {
            //         sum+=nums[j];
            //         // if(sum<k)
            //         //         j++;
            //         if(sum>k){
            //              while(sum>k)
            //                 {
            //                   sum-=nums[i];
            //                   i++;
            //                 }
            //         }
            //         if(sum==k){
            //            ans++;
            //         }
            //        j++; 
            // }
            // return ans;
            vector<int> p_sum(n);
            map<int,int>mp;
            mp[0]=1;
            int ans=0;
            p_sum[0]=nums[0];
            for(int i=1; i<n; i++)
            {
                    p_sum[i] = p_sum[i-1]+nums[i];
                    //cout<<p_sum[i];
            }
            for(int i=0; i<p_sum.size(); i++)
            {
                    if(mp.find(p_sum[i]-k)!=mp.end())
                        ans+=mp[p_sum[i]-k];

                     mp[p_sum[i]]++;

            }
            return ans;
    }
};