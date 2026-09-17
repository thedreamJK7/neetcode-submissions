class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (char c: s) {
            if (!(p.empty()) && (c == '}' || c == ')' || c == ']')) {
                if ((p.top() == '{' && c == '}') || (p.top() == '(' && c == ')') ||                     p.top() == '[' && c == ']') {
                    p.pop();
                    continue;
                }
                return (false);
            }
            p.push(c);
        }
        return p.empty();
    }
};
