class Solution {
public:
        bool isValid(vector<int>& candies, long long k, int max_candies){
        long long child = 0;
        
        for(auto x: candies)
            child += x/max_candies;
        
        return child >= k;
    }
        
    int maximumCandies(vector<int>& candies, long long k) {
          
        int l=1;
        int h=*max_element(candies.begin(),candies.end());
        int res=0;
            while(l<=h)
            {
                    int mid=l+(h-l)/2;
                    if(isValid(candies,k,mid))
                    {
                            res=mid;
                            l=mid+1;
                    }
                    else
                            h=mid-1;
            }
            return res;
    }
};