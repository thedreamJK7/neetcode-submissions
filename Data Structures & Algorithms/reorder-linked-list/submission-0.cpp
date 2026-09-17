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
    void reorderList(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;

        /* Reaching the half of the list */
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        /* Reversing the hal of the list  */
        ListNode *prev = nullptr;;
        ListNode *current;
        while (slow) {
            current = slow->next;
            slow->next = prev;
            prev = slow;
            slow = current;
        }
        ListNode *firstHalfCurrent = head;
        ListNode *secondHalfCurrent = prev;
        while (secondHalfCurrent && secondHalfCurrent->next) {
            ListNode* firstHalfNext = firstHalfCurrent->next;
            ListNode* secondHalfNext = secondHalfCurrent->next;

            firstHalfCurrent->next = secondHalfCurrent;
            secondHalfCurrent->next = firstHalfNext;

            firstHalfCurrent = firstHalfNext;
            secondHalfCurrent = secondHalfNext;     
        }
    }
};
