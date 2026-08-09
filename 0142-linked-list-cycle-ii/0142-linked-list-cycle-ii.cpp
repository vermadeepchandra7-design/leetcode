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

1. If the list is empty or has only one node, return NULL.
2. Take two pointers: slow and fast, both starting from head.
3. Move slow 1 step and fast 2 steps to detect a cycle.
4. If slow == fast, a cycle exists and we have found the meeting point.
5. Take another pointer entry = head and move entry and slow 1 step at a time.
6. When entry == slow, they point to the cycle's starting node, so return entry.
*/
    ListNode *detectCycle(ListNode *head) {
        /* Slow and fast pointer */
        ListNode * slow = head ;
        ListNode * fast = head ;
    /* checking is there is only one Node or no node in the link list*/
    if( head == nullptr || head->next == nullptr){
        return nullptr ;
    }

    /* using while loop for the cycle detection int the link list */
    while( fast != nullptr && fast->next != nullptr ){
       /* Deciding how many steps slow and fast pointer will take */
       slow = slow -> next ;
       fast = fast -> next -> next ;
      /* when (slow == fast ) than cycle exist in the link list */
      if(slow == fast){
        break ;
      }
    }
    if( slow != fast){
    /* Means No cycle exist in the link list so return null */
    return nullptr ;
    }
    
    ListNode * entry = head ;
    while( entry != slow ){
        /* Deciding how entry pointer and the slow pointer will move */
        entry = entry ->next ;
        slow = slow -> next ;
    }
       return entry ; 
    }
}; /* Time complexity  : O(n) 
      space complexity : O(1) */