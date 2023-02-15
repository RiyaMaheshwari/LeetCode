class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
            priority_queue<pair<int,int>>h;
            for(int i=0; i<arr.size(); i++)
            {
                    h.push({abs(arr[i]-x),arr[i]});
                    if(h.size()>k)
                            h.pop();
            }
            while(h.size()!=0)
            {
                    ans.push_back(h.top().second);
                    h.pop();
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};