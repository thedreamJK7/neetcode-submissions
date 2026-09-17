class MinStack {
public:
    MinStack() { }
    
    void push(int val) {
        _stk.push_back(val);
    }
    
    void pop() {
        _stk.pop_back();
    }
    
    int top() {
        return (_stk.back());        
    }
    
    int getMin() {
        auto it = _stk.begin();
        int min = *it;
        for (; it != _stk.end(); it++) {
            if (*it < min) {
                min = *it;
            }
        }
        return (min);
    }
private:
    vector<int> _stk;
};
