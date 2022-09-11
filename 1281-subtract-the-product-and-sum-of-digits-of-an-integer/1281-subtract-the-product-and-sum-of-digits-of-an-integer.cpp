class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem, sum=0, p=1, ans;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            p=p*rem;
            n=n/10;
        }
        ans=p-sum;
        return ans;
    }
};