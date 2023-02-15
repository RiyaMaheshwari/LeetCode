class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        vector<int> ans;
        int i=n-1;
        int carry=0;
        int sum;
        while(i>=0 || k>0 || carry)
        {
                sum=carry;
                if(i>=0)
                {
                     sum+=num[i];
                     i--;
                }
                if(k)
                {
                        sum+=(k%10);
                        k=k/10;
                }
                carry=sum/10;
                sum=sum%10;
                ans.push_back(sum);
        }
            reverse(ans.begin(), ans.end());
            return ans;
    }
};