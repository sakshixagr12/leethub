class MinStack {
    stack<long long>st;
    long long mini;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        }
        else {
            if ( mini <= val) st.push(val);
            else {
                long long y = 2LL*val;
                st.push(y-mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        if (st.empty()) { 
             return;
            }
        else {
            long long x = st.top();
            st.pop();
            if ( x >= mini) {}
            else {
                mini = 2LL*mini-x;
            }
        }
    }
    
    int top() {
        if (st.empty()) {
            return -1;
            }
        long long  x = st.top();
        if ( x >= mini) return x;
        else return mini;
        
    }
    
    int getMin() {
        if (st.empty()) return -1;
        return mini;
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