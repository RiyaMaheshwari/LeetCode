class Solution {
public:
    int mySqrt(int x) {
        int l=1;
        int h=x;
        long int mid;
        int ans=0;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return ans;
    }
};