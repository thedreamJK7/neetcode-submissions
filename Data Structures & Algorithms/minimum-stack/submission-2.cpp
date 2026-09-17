class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        _stk.push(val);
        val = min(val, _mStk.empty() ? val : _mStk.top());
        _mStk.push(val);
    }
    
    void pop() {
        _stk.pop();
        _mStk.pop();
    }
    
    int top() {
        return (_stk.top());        
    }
    
    int getMin() {
        return (_mStk.top());
    }
private:
    stack<int> _stk;
    stack<int> _mStk;
};
