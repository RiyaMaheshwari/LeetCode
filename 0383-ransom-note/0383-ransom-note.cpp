class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         vector<int> a(26,0),b(26,0);
        for(auto x:magazine) 
            b[x-'a']++;
        for(auto x:ransomNote)
            a[x-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(a[i]>b[i])
                return false;
        }
		
        return true;
    }
};