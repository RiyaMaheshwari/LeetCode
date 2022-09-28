class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        char c = s[0];
        
        for(int i = 1; i < n; i++){
            if(s[i] == c){
                string substr = s.substr(0, i);
                int ctr = n/substr.size();
                string res = "";
                if(ctr*substr.size() == s.size()){
                    while(ctr >= 1){
                        res += substr;
                        ctr -= 1;
                    }
                    if(res == s)
                        return true;
                }
            }
        }
        return false;        
    }
};