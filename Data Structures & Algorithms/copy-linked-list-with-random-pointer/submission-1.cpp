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
        tmp = head;
        while (tmp) {
            deepCopy[tmp]->next = deepCopy[tmp->next];
            deepCopy[tmp]->random = deepCopy[tmp->random];
            tmp = tmp->next;
        }

        return deepCopy[head];
    }
};
