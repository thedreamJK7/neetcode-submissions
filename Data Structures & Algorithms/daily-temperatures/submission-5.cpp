class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        vector<int> res(tmp.size(), 0);
        stack<pair<int, int>> stack;
        for (int i = 0; i < tmp.size(); i++) {
            int t = tmp[i];
            while (!stack.empty() && t > stack.top().first) {
                auto pair = stack.top();
                stack.pop();
                res[pair.second] = i - pair.second;
            }
            stack.push({t, i});
        }
        return res;
    }
};
