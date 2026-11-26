class MinStack {
private:
    vector<int> _stc;
public:
    MinStack():_stc(0){
        
    }
    
    void push(int val) {
        _stc.push_back(val);
    }
    
    void pop() {
        _stc.erase(_stc.end() - 1);
    }
    
    int top() {
        return *(_stc.end() - 1);
    }
    
    int getMin() {
        int m = *(_stc.begin());
        for (auto it = _stc.begin() + 1; it != _stc.end(); ++it) {
            m = min(m, *it);
        }
        return m;
    }
};
