class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        string      cl = "})]";
        for (char c: s) {
            if (find(cl.begin(), cl.end(), c) != cl.end() && !(p.empty())) {
                char current = p.top();
                if (current == '{' && c == '}') {
                    p.pop();
                    continue;
                }
                if (current == '(' && c == ')') {
                    p.pop();
                    continue;
                }
                if (current == '[' && c == ']') {
                    p.pop();
                    continue;
                }
                return (false);
            }
            p.push(c);
        }
        if (p.empty()) {
            return true;
        }
        return false;
    }
};
