struct Node {
    int val;
    int key;
    Node *next;
    Node *prev;
};

class LRUCache {
public:
    LRUCache(int capacity): _capacity(capacity), _hashMap() {
        _LRU = new Node();
        _MRU = new Node();

        _LRU->prev = _MRU;
        _MRU->next = _LRU;
    }
    
    int get(int key) {
        auto it = _hashMap.find(key);
        if (it == _hashMap.end())
            return -1;
        Node * tmp = it->second;
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
        insert(tmp);
        return tmp->val;
    }
    
    void remove(void) {
        Node *del = _LRU->prev;
        _LRU->prev->prev->next = _LRU;
        _LRU->prev = _LRU->prev->prev;
        _hashMap.erase(del->key);
    }
    void insert(Node *node) {
        _hashMap[node->key] = node;
        node->next = _MRU->next;
        node->prev = _MRU;

        _MRU->next->prev = node;
        _MRU->next = node;
    }
    void put(int key, int value) {
        auto it = _hashMap.find(key);
        if (it != _hashMap.end()) {
            Node *tmp = it->second;
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
            tmp->val = value;
            insert(tmp);
        } else {
            Node *tmp = new Node();
            tmp->val = value;
            tmp->key = key;
            insert(tmp);
        }
        if (_hashMap.size() > _capacity) {
            remove();
        }
    }
private:
    int                         _capacity;
    unordered_map<int, Node *>  _hashMap;
    Node                        *_LRU;
    Node                        *_MRU;
};