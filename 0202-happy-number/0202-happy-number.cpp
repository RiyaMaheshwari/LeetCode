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
        unordered_map<int,int>umap;
        int y=sum(n);
        if(y==1)
            return true;
        while(y!=1){
            y=sum(y);
            if(umap.find(y)!=umap.end())
                return false;
            else
                umap[y]++;
        }
        return true;
    }
};
