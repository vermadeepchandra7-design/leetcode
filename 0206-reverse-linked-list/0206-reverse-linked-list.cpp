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
    /*
    Approach:
    1. Use three pointers: previous, current, and next.
    2. Initially set previous = nullptr and current = head.
    3. Store current->next in next before changing the link.
    4. Reverse the link: current->next = previous.
    5. Move pointers forward: previous = current and current = next.
    6. Repeat until current becomes nullptr.
    7. Return previous as the new head. Empty or single-node lists are handled
    automatically.
    */
    ListNode* reverseList(ListNode* head) {

        /* Solving this problem by 3 pointers */

        ListNode* previous = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr) {
            /* storing the link of current pointer in the next pointer  */
            next = current->next;
            current->next = previous;
            /* updating the previous , current pointers for moving ahead  */
            previous = current;
            current = next;
        }
        return previous;
    }
}; /*  Time complexity  : O(n)
       space complexity : O(1) */