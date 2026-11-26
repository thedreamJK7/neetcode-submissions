class Solution {
public:
    bool isValid(string s) {
        string o = "{[(";
        stack<char> p;
        for (char c: s) {
            if (o.find(c) != -1) {
                p.push(c);
            } else {
                if (p.empty()) {
                    return false;
                }
                char current = p.top();
                if (!(c == ']' && current == '[' 
                || c == '}' && current == '{' 
                || c == ')' && current == '(')) {
                    return false;
                }
                p.pop();
            }
        }
        return p.empty();
    }
};
