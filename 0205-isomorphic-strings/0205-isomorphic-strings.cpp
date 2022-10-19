class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n != m){
            return false;
        }
        
        map<char, vector<int>> mp1;
        map<char, vector<int>> mp2;
        
        for(int i=0;i<n;i++){
            mp1[s[i]].push_back(i);
            mp2[t[i]].push_back(i);
        }
        
        for(int i=0;i<n;i++){
            auto curr1 = mp1[s[i]];
            auto curr2 = mp2[t[i]];
             if(curr1 == curr2){
                continue;
            }
            return false;
        }
        return true;
    }
};