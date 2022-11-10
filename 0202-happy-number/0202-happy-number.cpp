class Solution {
public:
    int sum(int n){
        int sum=0, r;
        while(n)
        {
            r=n%10;
            sum=sum+(r*r);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int>ump;
        int y=sum(n);
        if(y==1)
            return true;
        while(y!=1){
            y=sum(y);
            if(ump.find(y)!=ump.end())
                return false;
            else
                ump[y]++;
        }
        return true;
    }
};