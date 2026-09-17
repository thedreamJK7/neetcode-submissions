class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nSet(nums.begin(), nums.end());
        int longest = 0;

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
