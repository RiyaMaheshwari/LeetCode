class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int k = image[0].size();
        int j, i;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<(k+1)/2; j++)
            {
                int temp;
                temp=image[i][j];
                image[i][j]=image[i][k-1-j];
                image[i][k-1-j]=temp;
            }
            for(int j=0; j<k; j++)
            {
                if(image[i][j]==1)
                {
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
            }
        }
        
        return image;
    }
};