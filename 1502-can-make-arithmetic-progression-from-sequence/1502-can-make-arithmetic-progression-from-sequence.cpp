class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff,c=0;
        bool k;
        sort(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++)
        {
            diff=(arr[1]-arr[0]);
            if((arr[i]-arr[i-1])==diff)
            {
                c++;
            }
        }
        if(c==arr.size()-1)
        {
            k=true;
        }
        else
            k=false;
        return k;
    }
};