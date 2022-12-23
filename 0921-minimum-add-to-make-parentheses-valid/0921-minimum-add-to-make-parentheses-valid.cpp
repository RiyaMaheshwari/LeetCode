class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        stack<char> st;
        int ans;
        for(int i=0; i<n; i++)
        {
                if(st.empty())
                        st.push(s[i]);
                else if(st.top()=='(' && s[i]==')')
                        st.pop();
                else
                        st.push(s[i]);
        }
            ans=st.size();
            return ans;
    }
};