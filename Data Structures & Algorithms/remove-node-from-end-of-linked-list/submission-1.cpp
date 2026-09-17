/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> arr;
        ListNode *  tmp = head;

        while (tmp) {
            arr.push_back(tmp->val);
            tmp = tmp->next;
        }
        ListNode    *lst = nullptr;
        ListNode    *hd = nullptr;
        int         size = arr.size();
        if (size == 1 && n == 1) {
            return NULL;
        }
        for (int i = 0; size > i; i++) {
            if ((size - n) == i) {
                continue ;
            }
            ListNode *newNode = new ListNode(arr[i]);

            if (!hd) {
                hd = newNode;
                lst = newNode;
            }
            else {
                lst->next = newNode;
                lst = newNode;
            }
        }
        return hd;
    }
};
