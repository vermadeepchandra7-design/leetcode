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

    1. Take two pointers: slow and fast, both starting from head.
    2. Move slow 1 step at a time.
    3. Move fast 2 steps at a time.
    4. Continue until fast == NULL or fast->next == NULL.
    5. Fast moves twice as fast as slow, so slow reaches the middle node.
    6. Return slow, which points to the middle node.
    */
    ListNode* middleNode(ListNode* head) {
        /* Slow and Fast Pointer */
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            /* Increating slow and fast pointer */
            slow = slow->next;
            fast = fast->next->next;
        }
        /*
           Fast moves 2 steps while slow moves 1 step.
           So, when fast reaches the end, slow is at the middle.
        */
        return slow;
        return slow;
    }
}; /*  Time complexity  : O(n)  
       space complexity : O(1)   */