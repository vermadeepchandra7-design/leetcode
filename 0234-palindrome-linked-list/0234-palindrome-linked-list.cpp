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
/*  Appraoch : (Brute force)
1. Create a pointer to traverse the linked list.
2. Store all node values in a vector.
3. Find the size of the vector.
4. Initialize two pointers: i at start and j at end.
5. Compare the values at i and j.
6. If values differ, return false.
7. Move i forward and j backward.
8. If all values match, return true.
*/

    bool isPalindrome(ListNode* head) {

        // Store linked list values in a vector
        ListNode* current = head;
        vector<int> temp;

        while (current != nullptr) {

            temp.push_back(current->val);

            // Move to the next node
            current = current->next;
        }

        // Use two pointers to check palindrome
        int n = temp.size();
        int i = 0, j = n - 1;

        while (i <= j) {

            // Mismatch means not a palindrome
            if (temp[i] != temp[j]) {
                return false;
            }

            // Move both pointers inward
            i++;
            j--;
        }

        return true;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/