class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (string s: tokens) {
            // if token is number
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                stk.push(stoi(s));
                // if token is operatot
            } else {
                // second number on the expression
                int a = stk.top();
                stk.pop();
                // first number on the expression
                int b = stk.top();
                stk.pop();
                if (s == "+") stk.push(b + a);
                else if (s == "-") stk.push(b - a);
                else if (s == "*") stk.push(b * a);
                else if (s == "/") stk.push(b / a);
            }
        }
        return stk.top();
    }
};
