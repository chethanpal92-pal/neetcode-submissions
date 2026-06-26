class MinStack {
public:
    stack<int>str;
    stack<int>minstk;
    MinStack() {
        
    }
    
    void push(int val) {
        str.push(val);
        int value=min(val,minstk.empty()?val:minstk.top());
        minstk.push(value);
    }
    
    void pop() {
        str.pop();
        minstk.pop();
    }
    
    int top() {
      return str.top();
    }
    
    int getMin() {
      return minstk.top();
    }
};
