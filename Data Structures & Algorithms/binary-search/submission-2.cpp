class Solution {
public:
    int search(vector<int>& n, int t) {
        int l = 0;
        int r = n.size() - 1;
        int mid = (r - l + 1) / 2;
        while (r >= l) {
            if (n[mid] == t) 
                return mid;
            if (n[mid] > t) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
            mid = r - (r - l + 1) / 2;
        }
        return -1;
    }
};
