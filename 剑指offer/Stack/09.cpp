class CQueue {
public:
    stack<int> stkQueue,stkExtra;
    CQueue() {}
    
    void appendTail(int value) {
        while(!stkQueue.empty()){
            int tx = stkQueue.top();
            stkQueue.pop();
            stkExtra.push(tx);
        }
        stkQueue.push(value);
        while(!stkExtra.empty()){
            int tx = stkExtra.top();
            stkExtra.pop();
            stkQueue.push(tx);
        }
    }
    
    int deleteHead() {
        if(stkQueue.empty()) return -1;
        int res = stkQueue.top();
        stkQueue.pop();
        return res;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
