class Solution {
public:
        bool check(string a){
        int s=0;
        int e=a.size()-1;
        while(s<=e){
            if(a[s]!=a[e])
                return 0;
            else{
                s++;
                e--;
            }
        }
        return 1;
        }
    string firstPalindrome(vector<string>& words) {
        for(auto x : words)
        {
                if(check(x)==true)
                        return x;
        }
        return "";
    }
};