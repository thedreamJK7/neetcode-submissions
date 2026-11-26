class Solution {
public:
    bool isValid(string s) {
        string o = "{[(";
        string cl = "]})";
        stack<char> p;
        for (char c: s) {
            if (o.find(c) != -1) {
                p.push(c);
            } else {
                if (p.empty()) {
                    return false;
                }
                char current = p.top();
                if (o.find(current) == -1) {
                    return false;
                } else {
                    if (!(c == ']' && current == '[' 
                    || c == '}' && current == '{' 
                    || c == ')' && current == '(')) {
                        return false;
                    }
                }
                p.pop();
            }
        }
        if (p.empty()) {
            return true;
        }
        return false;
    }
};
