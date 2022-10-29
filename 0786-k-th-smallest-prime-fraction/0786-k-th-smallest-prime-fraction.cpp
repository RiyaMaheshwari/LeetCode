class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<float, pair<int, int>>>frac;
        for(int i=0; i<arr.size()-1; i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                float p=(float)arr[i];
                float q=(float)arr[j];
                float x = p/q;
                
                frac.push_back({x,{arr[i],arr[j]}});
            }
        }
        sort(frac.begin(), frac.end());
        vector<int> ans(2);
        ans[0]=frac[k-1].second.first;
        ans[1]=frac[k-1].second.second;
        
        return ans;
    }
};