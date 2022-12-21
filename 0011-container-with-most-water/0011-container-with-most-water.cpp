class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int i=0; 
            int j=n-1;
         while(i<j)
         {
                 if(heights[i]<=heights[j]){
                        ans=max(ans,(j-i)*heights[i]);
                                i++;
                 }
                 else{
                       ans=max(ans, (j-i)*heights[j]);
                                j--;  
                 }
         }
        return ans;
    }
};