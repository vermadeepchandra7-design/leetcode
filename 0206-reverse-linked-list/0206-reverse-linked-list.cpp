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
    ListNode* reverseList(ListNode* head) {
        
        /* Solving this problem by 3 pointers */

        ListNode * previous = nullptr ;
        ListNode * current  = head ;
        ListNode * next     = nullptr ;

       while( current != nullptr ){
       /* storing the link of current pointer in the next pointer  */
       next = current -> next ;
       current -> next = previous ;
      /* updating the previous , current pointers for moving ahead  */ 
       previous = current ;
       current  = next ;
       }
       return previous ;
    }
};