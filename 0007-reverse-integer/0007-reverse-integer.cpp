class Solution {
public:
    int reverse(int x) {
        int sum=0;
            int r;
        while(x)
        {
               r=x%10;
                if(sum>INT_MAX/10 || sum<INT_MIN/10)
                        return 0;
               sum=(sum*10)+r;
                x=x/10;
        }
        return sum;  
    }
};