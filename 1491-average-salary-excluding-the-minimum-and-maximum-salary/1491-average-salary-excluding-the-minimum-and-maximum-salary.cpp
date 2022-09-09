class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int n=salary.size();
        int min=salary[0];
        int max=salary[0];
        for(int i=0; i<n; i++)
        {
            if(salary[i]<min)
                min=salary[i];
        }
        
        for(int i=0; i<n; i++)
        {
            if(salary[i]>max)
                max=salary[i];
        }
        for(int i=0; i<n; i++)
        {
            sum=sum+salary[i];
        }
        sum=sum-min-max;
        return (sum/(n-2));
    }
};