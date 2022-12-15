class Solution {
public:
    double myPow(double x, int n) {
        double ans;
                    if(n==0)
                            return 1;
                    if(n==1)
                            return x;
                    if(n<0){
                            ans=pow(x,n);
                    }
                    else 
                        ans=pow(x,n);
            return ans;
    }
};