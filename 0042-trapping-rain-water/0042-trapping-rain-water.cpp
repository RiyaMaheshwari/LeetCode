class Solution {
public:
    int trap(vector<int>& height) {
            int sum=0;
            int k;
            vector<int> water;
            int n=height.size();
        int maxl[n];
        int maxr[n];
            maxl[0]=height[0];
            maxr[n-1]=height[n-1];
            for(int i=1; i<n; i++)
                    maxl[i]=max(maxl[i-1], height[i]);
            for(int i=n-2; i>=0; i--){
                   k= max(maxr[i+1], height[i]);
                    maxr[i]=k;
            }
            for(int i=0; i<n; i++)
            {
                    water.push_back(min(maxr[i],maxl[i])-height[i]);
                    sum=sum+water[i];
            }
            return sum;
    }
};