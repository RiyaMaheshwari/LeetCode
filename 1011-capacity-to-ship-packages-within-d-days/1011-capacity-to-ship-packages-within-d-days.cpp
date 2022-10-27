class Solution {
public:
    bool isvalid(vector<int>& weights, int days, int max , int n)
    {
        n=weights.size();
        int curr_days =1;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+weights[i];
            if(sum>max)
            {
                curr_days++;
                sum=weights[i];
            }
            if(curr_days>days)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start;
        int end=0;
        int n=weights.size();
        start=*max_element(weights.begin(), weights.end());
        for(int i=0; i<weights.size(); i++)
        {
            end=end+weights[i];
        }
        if(weights.size()<days)
            return 0;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(weights,days,mid,n)==true)
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};