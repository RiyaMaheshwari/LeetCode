class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size=gain.size();
        int altitude[size+1]; 
        altitude[0]=0;
        for(int i=1; i<=size; i++)
        {
            altitude[i] = altitude[i-1]+gain[i-1];
        }
        int max=altitude[0];
        for(int i=0; i<=size; i++)
        {
            if(altitude[i]>max)
            {
                max=altitude[i];
            }
        }
        return max;
    }
};