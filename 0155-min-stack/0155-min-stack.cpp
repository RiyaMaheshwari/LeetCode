class MinStack {
public:
    stack<int> st;
    stack<int> ss;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(ss.size()==0  || st.top()<=ss.top()){
            ss.push(val);
        }/** initialize your data structure here. */
    }
    
    void pop() {
        if(st.size())
        {
            if(st.top()==ss.top())
                ss.pop();
            st.pop();
        }
    }
    
    int top() {
        if(st.size())
                return st.top();
            else
                    return -1;
    }
    
    int getMin() {
        if(ss.size())
                return ss.top();
        else
           return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */