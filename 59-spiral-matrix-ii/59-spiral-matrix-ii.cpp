class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top=0;
        int right=n-1;
        int left=0;
        int bottom=n-1;
        int val=0;
        
        vector<vector<int>> ans(n, vector<int>(n));
        while(left<=right && top<=right)
        {
            for(int i=left; i<=right; i++){
                ans[top][i]=++val;
            }
            top++;
            
            for(int i=top; i<=bottom; i++){
                ans[i][right]=++val;
            }
            right--;
            
            if(top<=bottom)
            for(int i=right; i>=left; i--){
                ans[bottom][i]=++val;
            }
            bottom--;
            
            
            if(left<=right)
            for(int i=bottom; i>=top; i--){
                ans[i][left]=++val;
            }
            left++;
        }
        return ans;
    }
};