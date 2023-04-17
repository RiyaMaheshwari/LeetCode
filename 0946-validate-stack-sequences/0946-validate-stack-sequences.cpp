class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
            int j=0;
            for(auto x:pushed)
            {
                    
                        st.push(x); 
                        while(!st.empty() && st.top()==popped[j] )
                        {
                            st.pop();
                            j++;
                        }
            }
            return st.empty();
            // if(st.size()==0)
            //         return true;
            // else
            //         return false;
        //     int currentPopIndex = 0;
        // stack<int> stk;
        // for(int x : pushed){
        //     stk.push(x);
        //     while(!stk.empty() && stk.top() == popped[currentPopIndex]){
        //         stk.pop();
        //         currentPopIndex++;
        //     }
        // }
        // return stk.empty();
    }
};