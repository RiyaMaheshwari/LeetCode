class Solution {
public:
    int longestValidParentheses(string s) {
        /*stack<int> st;
            st.push(-1);
            int ans=0;
        for(int i=0; i<s.length(); i++)
        {
                if(s[i]=='(')
                        st.push(i);
                else{
                        st.pop();
                        if(st.empty()){
                                st.push(i);
                        }
                        else
                        {
                                int l = i-st.top();
                                ans=max(ans, l);
                        }
                }
        }
        return ans;*/
            int open = 0 , close = 0;
        int ans = 0;
        
        // 0 -- n
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                open++;
            }
            else{
                close++;
            }
            
            if(open == close){
                int len = open + close;
                ans = max(ans,len);
            }
            else if(close > open ){
                open = close = 0;
            }
        }
        
        open = close = 0;
        // n -- 0
        for(int i= s.length()-1; i>=0 ;i--){
            if(s[i] == '('){
                open++;
            }
            else{
                close++;
            }
            
            if(open == close){
                int len = open + close;
                ans = max(ans,len);
            }
            else if(open > close ){
                open = close = 0;
            }
        }
        
        return ans;
    }
};