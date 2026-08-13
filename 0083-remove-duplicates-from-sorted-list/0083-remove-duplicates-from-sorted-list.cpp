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
    1. If the list has 0 or 1 node, return the list as it is.
    2. Start a pointer `current` from the first node.
    3. Compare `current->val` with `current->next->val`.
    4. If both values are same, delete the duplicate next node.
    5. Connect `current` directly to the node after the duplicate.
    6. If values are different, move `current` to the next node.
    7. Continue until the end and return `head`.
    */
    ListNode* deleteDuplicates(ListNode* head) {
        /*if there is one node one or no node */
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        /* Solving it by two pointer Approach */
        ListNode* current = head;
        while (current != nullptr && current->next != nullptr) {
            /* now comparing current pointer and current->next pointer*/
            if (current->val == current->next->val) {

                ListNode* next_next = current->next->next;
                ListNode* node_to_delete = current->next;
                /* Deleting the duplicate node */
                delete (node_to_delete);
                current->next = next_next;
            } else {
                /* current and current->next are not equal */
                current = current->next;
            }
        }

        return head;
    }
}; /* Time complexity  : O(n)
      space complexity : O(1) */