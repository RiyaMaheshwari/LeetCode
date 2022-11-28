class Solution {
public:
    bool judgeSquareSum(int c) {
        long int low=0;
        long int high=sqrt(c);
        while(low<=high){
            long int sum=(low*low)+(high*high);
            if(sum==c)
                return true;
            if(sum<c)
                low++;
            else
                high--;
        }
         return false;
    }
};