class Solution {
public:
    bool isPalindrome(string s) {
        string nStr;
        for (char c: s) {
            if (isalnum(c))
                nStr += tolower(c);
        }
        cout << nStr;
        int i = 0, j = nStr.size() - 1;
        while (i < j) {
            if (nStr[i] != nStr[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
