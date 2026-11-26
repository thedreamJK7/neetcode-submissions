class Solution {
public:
    int search(vector<int>& n, int t) {
        int l = 0;
        int r = n.size() - 1;
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if (n[mid] == t) 
                return mid;
            if (n[mid] > t) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
};
