class Solution {
public:
    int findMin(vector<int>& num) {
        int n = num.size();
        int l = 0, h = n-1;
        
        while (l<h){
            int mid = (l+h)/2;
            if (num[l]<num[h])
                return num[l];
            
            //int mid = (l+h)/2;
            
            if (num[mid]>=num[l]) {
                l = mid+1;
            } else {
                h = mid;
            }
        }
        return num[l];
    }
};