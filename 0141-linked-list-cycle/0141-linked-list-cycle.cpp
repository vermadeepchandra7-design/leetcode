/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
/*
Approach:
1. Take two pointers: slow and fast, both starting from head.
2. Move slow by 1 step and fast by 2 steps.
3. If a cycle exists, slow and fast will eventually meet.
4. If fast or fast->next becomes NULL, there is no cycle.
5. If slow == fast, return true; otherwise return false.
*/

    bool hasCycle(ListNode *head) {

        /*  slow pointer and fast pointer Approach */

        ListNode * slow = head ;
        ListNode * fast = head ;

        while( fast != nullptr && fast -> next != nullptr ){
            
            slow = slow -> next ;
            fast = fast -> next -> next ;

         /* if there is the loop in the link list  */
         if( slow == fast ){

            return true ;
         }

        }
        return false ;
    }

}; /*  Time complexity  : O(n)  
       space complexity : O(1)  */