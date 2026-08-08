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
/*  Approach :
         1. created two pointer slow and fast both initially present on head
            i.e the same position
         2. now slow will move one step at a time and fast will move two steps   at a time 
         3. if there exist cycle in the list than we encountered with the condition where (slow == fast) and we retrun true
         4. if the link list are straight than it do not consist cylcle so while 
            loop get break and than we return false
            */
    bool hasCycle(ListNode *head) {

       /* slow and fast pointer */ 
       ListNode * slow = head ;
       ListNode * fast = head ;
/*
   fast ko 2 steps move karna hai:
   1st step → fast->next
   2nd step → fast->next->next

   Isliye fast aur fast->next NULL nahi hone chahiye.
   Agar fast ya fast->next NULL hai → loop stop.
*/
while (fast != nullptr && fast->next != nullptr){

    slow = slow -> next ;
    fast = fast -> next -> next ;
// cycle exist in the link list
    if( slow == fast){
        return true ;
    }
} 
// cycle do not exist
  return false   ;
    }
};/*  Time complexity  : O(n)  
      space complexity : O(1) */