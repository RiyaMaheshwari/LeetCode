// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int h=n;
        int mid;
        while(l<=h)
        {
            mid = l+(h-l)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
            {
                return mid;
            }
            else if(isBadVersion(mid)==false)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return mid;
    }
};