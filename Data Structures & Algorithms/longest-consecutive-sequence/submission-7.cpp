class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nSet;
        int longest = 0;

        for (auto &it: nums) {
            nSet.insert(it);
        }

        for (int num: nums) {
            if(nSet.find(num-1) == nSet.end()) {
                int l = 1;
                while (nSet.find(num + l) != nSet.end())
                    l++;
                if (longest < l) {
                    longest = l;
                }
            }
        }
        return (longest);
    }
};
