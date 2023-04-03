class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int c=0;
            int i=0;
            // int j=1;
            int n=people.size();
            int j=n-1;
            sort(people.begin(),people.end());
            while(i<=j)
            {
                // if(i==n-1 && j>=n)
                //     c++;
                //     else 
                if(people[i]+people[j]<=limit)
                    {
                        c++;
                        i++;
                        j--;
                    }
                    else
                    {
                        c++;
                       j--;
                    }
            }
            return c;
    }
};