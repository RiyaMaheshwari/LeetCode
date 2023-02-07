class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& a) {
        int n=a.size();
            int sum=0;
            for(int i=0; i<n; i++)
            {
                    sum+=a[i];
            }
             int s=0;
            if((sum%3)!=0)
                    return false;
            // if((sum%3)==0 && (sum!=0))
            //    s=sum/3;
            // else
            //         return false;
            // int sum1, sum2;
            // sum1=sum2=0;
            int ans=0;
            int j=0;
            while(j<n)
            {
                   s+=a[j];
                    if(s==(sum/3))
                    {
                            ans++;
                            s=0;
                    }
                    j++;
            }
            return ans>=3;
            // if(j==n)
            //         return false;
            // int k=j+1;
            // while(k<n)
            // {
            //        sum2+=a[k];
            //         if(sum2==s)
            //                 break;
            //         k++;
            // }
            // if(k==n)
            //         return false;
            // return true;
    }
};