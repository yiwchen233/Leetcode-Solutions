class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stkNormal,stkDescend;
    MinStack() {}
    
    void push(int x) {
        stkNormal.push(x);
        if(stkDescend.empty() || x<=stkDescend.top()) stkDescend.push(x);
    }
    
    void pop() {
        int tx = stkNormal.top();
        stkNormal.pop();
        if(tx==stkDescend.top()) stkDescend.pop();
    }
    
    int top() {
        return stkNormal.top();
    }
    
    int min() {
        return stkDescend.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
