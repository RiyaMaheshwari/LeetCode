class Solution {
public:
        void f(int i,vector<string> &ans,string digits,string &temp, unordered_map<char,string>mp){
                if(i==digits.size())
                {
                        ans.push_back(temp);
                        return;
                }
                string s=mp[digits[i]];
                for(int j=0; j<s.length(); j++)
                {
                        temp.push_back(s[j]);
                        f(i+1, ans, digits, temp, mp);
                        temp.pop_back();
                }
        }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp;
            string temp;
            vector<string> ans;
            if(digits=="")
                    return ans;
            mp['2']="abc";
            mp['3']="def";
            mp['4']="ghi";
            mp['5']="jkl";
            mp['6']="mno";
            mp['7']="pqrs";
            mp['8']="tuv";
            mp['9']="wxyz";
            
            f(0, ans, digits, temp, mp);
            return ans;
    }
};