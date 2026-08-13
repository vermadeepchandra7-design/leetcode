/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }; **/
class Solution {
public:
    /*
    Approach:
    1. If the list has 0 or 1 node, return head because it is already reversed.
    2. Recursively reach the last node of the list and store it as the new head.
    3. On returning back, make the next node point to the current node to
    reverse the link.
    4. Set the current node's next to nullptr to remove the old link.
    5. Repeat the same process while returning from recursion.
    6. Return the stored last node as the new head.
    */
    ListNode* reverseList(ListNode* head) {

        /* if there is only one node or no node in the list */
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* last = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;

        return last;
    }
}; /*  Time complexity  : O(n)
       space complexity : O(1) */