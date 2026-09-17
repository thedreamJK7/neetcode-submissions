class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (string s: tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                if (s == "+") {
                    b += a;
                    stk.push(b);
                    continue;
                }
                if (s == "-") {
                    b -= a;
                    stk.push(b);
                }
                if (s == "*") {
                    b *= a;
                    stk.push(b);
                }
                if (s == "/") {
                    b /= a;
                    stk.push(b);
                }
                cout << stk.top();
                continue;
            }
            stk.push(std::atoi(s.c_str()));
        }
        return stk.top();
    }
};
