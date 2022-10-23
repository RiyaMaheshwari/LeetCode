class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1;
        int h=num;
        long int mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                l=mid+1;
            else
                h=mid-1;
        }
        return false;
    }
};