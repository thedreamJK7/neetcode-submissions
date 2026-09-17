/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *tmp = head;
        unordered_map<Node*, Node*> deepCopy;
        while (tmp) {
            deepCopy.insert({tmp, new Node(tmp->val)});
            tmp = tmp->next;
        }
        Node *current = head;
        Node *ret = deepCopy[current]; 
        while (current) {
            deepCopy[current]->next = deepCopy[current->next];
            deepCopy[current]->random = deepCopy[current->random];
            current = current->next;
        }

        return ret;
    }
};
