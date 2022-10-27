class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
        return false;
    
    if((s+s).find(goal) == -1)
        return false;
    else 
        return true;
    }
};