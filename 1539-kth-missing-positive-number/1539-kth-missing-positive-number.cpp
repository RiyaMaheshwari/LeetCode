class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> num;
        int i;
        for(int i=1; i<=2000; i++)
        {
            num.push_back(i);
        }
        for(i=0; i<arr.size(); i++)
        remove(num.begin(),num.end(),arr[i]);
        return num[k-1];
    }
};