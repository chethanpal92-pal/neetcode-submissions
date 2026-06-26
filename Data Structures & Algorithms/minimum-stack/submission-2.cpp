class MinStack {
 stack<int>str;
 stack<int>minstr;
public:
    MinStack() {}
    
    void push(int val) {
     str.push(val);
     int value=min(val,minstr.empty()?val:minstr.top());
     minstr.push(value);
    }
    
    void pop() {
        str.pop();
        minstr.pop();
    }
    
    int top() {
        return str.top();
    }
    
    int getMin() {
        return minstr.top();
    }
};
