class Solution {
public:
/*
1. Har number ko next index maan kar us index par move karte hain, jisse array linked list ki tarah behave karta hai.

2. Use two pointers: slow moves 1 step, fast moves 2 steps.
3. Move both pointers until they meet inside the cycle.
4. The meeting point confirms that a cycle exists.
5. Reset slow to index 0 and keep fast at the meeting point.
6. Move both pointers 1 step at a time.
7. Their next meeting point is the duplicate number.
8. Return the meeting value as the answer.
*/
    int findDuplicate(vector<int>& nums) {

        /* Har number ko next index maan kar move karte hain */
        int slow = 0;
        int fast = 0;

        /* Slow 1 step aur fast 2 steps move karega */
        while (true) {
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];

            /* Dono mil gaye means cycle exist karti hai */
            if (slow == fast) {
                break;
            }
        }

        /* Slow ko starting point par reset karte hain */
        slow = 0;

        /* Cycle ka starting point find karte hain */
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        /* Meeting point hi duplicate number hai */
        return slow;
    }
};/*  Time complexity  : O(n)  
      space complexity : O(1)  */