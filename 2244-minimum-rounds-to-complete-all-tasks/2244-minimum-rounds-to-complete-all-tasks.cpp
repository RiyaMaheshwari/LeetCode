class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int>mp;
            int c=0;
            for(int i=0; i<tasks.size(); i++)
                    mp[tasks[i]]++;
            for(auto x : mp)
            {
                    if(x.second == 1)
                            return -1;
                    if(x.second % 3 ==0)
                            c= c+ (x.second)/3;
                    else
                            c=c+1+(x.second)/3;
            }
            return c;
    }
};