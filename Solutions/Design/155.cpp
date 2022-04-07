class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stkNormal,stkDescend;
    MinStack() {}
    
    void push(int val) {
        stkNormal.push(val);
        if(stkDescend.empty() || val<=stkDescend.top()) stkDescend.push(val);
    }
    
    void pop() {
        int tx = stkNormal.top();
        stkNormal.pop();
        if(tx==stkDescend.top()) stkDescend.pop();
    }
    
    int top() {
        return stkNormal.top();
    }
    
    int getMin() {
        return stkDescend.top();
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
