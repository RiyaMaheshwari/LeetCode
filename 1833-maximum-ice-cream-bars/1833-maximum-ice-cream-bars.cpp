class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
            int c=0;
            sort(costs.begin(), costs.end());
        for(int i=0; i<costs.size(); i++)
        {
                if(costs[i]<=coins)
                {
                        c++;
                        coins=coins-costs[i];
                }
                else break;
        }
            return c;
    }
};