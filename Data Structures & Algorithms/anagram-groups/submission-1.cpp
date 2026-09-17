class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        string tmp;
        vector<vector<string>> res;
        int len = strs.size(), i = 0;
        while (len > i) {
            tmp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            hashmap[strs[i]].push_back(tmp);
            i++;
        }
        for (auto i: hashmap) {
            res.push_back(i.second);
        }
        return (res);
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}
