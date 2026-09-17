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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) {
            return NULL;
        }
        vector<int> arr;
        while (list1) {
            arr.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2) {
            arr.push_back(list2->val);
            list2 = list2->next;
        }
        sort(arr.begin(), arr.end());
        int arrS = arr.size();
        ListNode *lst = new ListNode(arr[0]);
        ListNode *head = lst;
        for (int i = 1; arrS > i; i++) {
            lst->next = new ListNode(arr[i]);
            lst = lst->next;
        }
        return (head);
    }
};
