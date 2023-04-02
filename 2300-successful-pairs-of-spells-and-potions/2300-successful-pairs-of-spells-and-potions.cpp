class Solution {
public:
        int f(int num, vector<int>&potions, long long success)
        {
                int l=0;
                int h=potions.size()-1;
                int a=potions.size();
                while(l<=h)
                {
                        int mid=l+(h-l)/2;
                        if((long long)num*potions[mid]>=success)
                        {
                                a=mid;
                                h=mid-1;
                        }
                        else
                                l=mid+1;
                }
                return potions.size()-a;
        }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
    //     int m=potions.size();
    //     int l=0;
    //     int h=m-1;
       vector<int>ans;
            sort(potions.begin(),potions.end());
            for(auto x:spells){
            int a=f(x,potions,success);
            
             ans.push_back(a);
            }
            return ans;
    }
};