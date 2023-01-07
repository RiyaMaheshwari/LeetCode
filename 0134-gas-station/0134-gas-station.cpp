class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(gas.begin(), gas.end(), 0)<(accumulate(cost.begin(), cost.end(),0)))
                return -1;
            int remaining = 0;
            int ans = 0;
        for(int i=0; i<gas.size(); i++)
        {
               remaining+= gas[i]-cost[i]; 
                if(remaining<0)
                {
                        ans=i+1;
                        remaining=0;
                }
        }
            return ans;
    }
};