class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(auto i:ransomNote)
        {
            if(count(magazine.begin(),magazine.end(),i) <count(ransomNote.begin(),ransomNote.end(),i))
                return false;
        }
        return true;
    }
};
