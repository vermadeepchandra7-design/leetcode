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
    /*  Approach : (Reversing the 2nd half of linked list)
    1. Use slow and fast pointers to find the middle of the list.
    2. Use prev to store the node before the middle.
    3. Reverse the second half of the linked list.
    4. Separate the first and second halves.
    5. Compare both halves node by node.
    6. If any values differ, return false.
    7. Move both pointers forward after comparison.
    8. If all values match, return true.
    */

    // Reverse the linked list recursively
    ListNode* reverseList(ListNode* head) {

        // Base case
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Reverse the remaining list
        ListNode* last = reverseList(head->next);

        // Reverse the current connection
        head->next->next = head;
        head->next = nullptr;

        return last;
    }

    bool isPalindrome(ListNode* head) {

        // Empty list or single node is always palindrome
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half
        ListNode* revhead = reverseList(slow);

        // Separate the two halves
        prev->next = nullptr;

        // Compare both halves
        while (revhead != nullptr && head != nullptr) {

            // Mismatch means not a palindrome
            if (revhead->val != head->val) {
                return false;
            }

            // Move both pointers forward
            revhead = revhead->next;
            head = head->next;
        }

        return true;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/