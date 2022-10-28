class Solution {
public:
    bool isvalid(vector<int>& piles, int h, int k)
    {
        long long int sum=0;
        for(int i=0; i<piles.size(); i++)
        {
            sum=sum+(piles[i]/k);
            if((piles[i]%k)!=0)
                sum=sum+1;
        }
        return sum<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int start=1;
        long long int end=*max_element(piles.begin(),piles.end());
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(piles,h,mid)==true)
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};