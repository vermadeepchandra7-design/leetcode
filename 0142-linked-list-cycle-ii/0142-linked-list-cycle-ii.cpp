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
Approach: (Brute force solution)

1. Create an unordered_set to store the addresses of visited nodes.
2. Start traversing the linked list from head using a current pointer.
3. If current is already present in the set, a cycle exists; return current.
4. Otherwise, store current in the set and move current to the next node.
5. Continue until current becomes NULL or a repeated node is found.
6. If current becomes NULL, no cycle exists, so return NULL.
*/
    ListNode *detectCycle(ListNode *head) {
/* Creating unordered_set for storing each traverse value */
        unordered_set< ListNode* > visited ;
        ListNode * current = head ;

        while( current != nullptr){
        /*checking if the current value we have visited or not*/
        if(visited.count(current)){
            
            return current ;
        }
        else{
            visited.insert(current);
            current = current->next ;
        }

        }
/* if the link list do not contain cycle then return nullptr */

    return nullptr ;
    }
};