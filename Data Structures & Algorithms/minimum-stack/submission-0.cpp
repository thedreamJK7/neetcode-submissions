class MinStack {
public:
    MinStack():_stk(0) {
        
    }
    
    void push(int val) {
        _stk.push_back(val);
    }
    
    void pop() {
        _stk.erase(_stk.end() - 1);
    }
    
    int top() {
        return (*(--_stk.end()));        
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
