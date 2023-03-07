class Solution {
public:
    bool isvalid(vector<int>& time, int totalTrips, long long mid)
    {
            long long sum=0;
            for(int i=0; i<time.size(); i++)
            {
                   sum+=mid/time[i]; 
            }
            if(sum>=totalTrips)
                    return true;
            else 
                    return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=1;
        long long max=*max_element(time.begin(),time.end());
        long long h=max*totalTrips;
        long long res=-1;
        while(l<=h)
        {
                long long mid=l+(h-l)/2;
                if(isvalid(time,totalTrips,mid)==true)
                {
                   res=mid;
                   h=mid-1;
                }
                else
                        l=mid+1;
        }
            return res;
    }
};