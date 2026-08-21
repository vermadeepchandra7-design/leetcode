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
/* Approach :
1. Create a dummy node to build the result list.
2. Use temp1 and temp2 to traverse both lists.
3. Initialize carry as 0.
4. Add both node values and carry.
5. Store sum % 10 in a new node.
6. Update carry using sum / 10.
7. Move both pointers to the next nodes.
8. Add the remaining carry and return the result.
*/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Dummy node helps us easily build the answer linked list.
        // It does not contain any actual answer value.
        ListNode* dummyHead = new ListNode(-1);

        // 'current' always points to the last node of our answer list.
        ListNode* current = dummyHead;

        // Temporary pointers to traverse both input linked lists.
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        // Stores carry generated after adding two digits.
        int carry = 0;

        // Continue until both linked lists are completely traversed.
        while (temp1 != nullptr || temp2 != nullptr) {

            // Start the sum with the carry from the previous addition.
            int sum = carry;

            // If l1 still has a node, add its value.
            if (temp1 != nullptr)
                sum += temp1->val;

            // If l2 still has a node, add its value.
            if (temp2 != nullptr)
                sum += temp2->val;

            /*
                Example:
                7 + 5 = 12

                Digit to store in current node = 12 % 10 = 2
                Carry = 12 / 10 = 1
            */
            ListNode* newNode = new ListNode(sum % 10);

            // Calculate carry for the next position.
            carry = sum / 10;

            // Attach the newly created node to our answer list.
            current->next = newNode;

            // Move current to the newly created node.
            current = current->next;

            // Move l1 pointer to the next node if possible.
            if (temp1 != nullptr)
                temp1 = temp1->next;

            // Move l2 pointer to the next node if possible.
            if (temp2 != nullptr)
                temp2 = temp2->next;
        }

        // If a carry is still remaining, create one final node.
        // Example: 9 + 1 = 10 -> final carry = 1
        if (carry != 0) {
            ListNode* newNode = new ListNode(carry);
            current->next = newNode;
        }

        // Dummy node was only used to simplify list construction.
        // The actual answer starts from dummyHead->next.
        return dummyHead->next;
    }
}; /* Time Complexity : O(max(n, m)) 
      Space Complexity: O(max(n, m)) */