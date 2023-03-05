class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {  // move all elements from q1 to q2
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        
    }
    
    int pop() {
        int value=q1.front();
        q1.pop();
        return value;
    }
    
    int top() {
        int value=q1.front();
        return value;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */