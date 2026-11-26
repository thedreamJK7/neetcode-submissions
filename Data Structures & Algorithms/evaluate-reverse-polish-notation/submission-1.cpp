class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        string op = "-+/*";
        stack<int> stk;
        int res = 0;
        for (auto it: tokens) {
            if (op.find(it) != -1) {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                if (it == "+") res = b + a;
                else if (it == "-") res = b - a;
                else if (it == "*") res = b * a;
                else res = b / a;
                stk.push(res);
            } else {
                stk.push(stoi(it));
            }
        }
        return stk.top();
    }
};
