class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum=candies[0],i;
        vector<bool> ans;
        for(i=0; i<candies.size(); i++)
        {
            if(candies[i]>maximum)
            {
                maximum=candies[i];
            }
        }
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies>=maximum)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};