
class Solution {
public:
    /*  1. Sabse pehle nums array ka size n calculate karenge.
        2. Running sum store karne ke liye ek n-size ka new vector pre create
       karenge.
        3. First element ka running sum nums[0] hi hoga, isliye pre[0] = nums[0]
       assign karenge.
        4. Ab loop i = 1 se n-1 tak execute karenge.
        5. Har iteration mein current element nums[i] ko access karenge.
        6. Current element ko previous running sum pre[i-1] ke saath add
       karenge.
        7. Calculated sum ko pre[i] mein store kar denge. Is tarah har next
       index ka running sum calculate hota jayega.
        8. Finally, pre vector return kar denge, jisme complete running sum
       stored hoga.    */
    vector<int> runningSum(vector<int>& nums) {

        /* Optimized Approach for Running Sum */

        int n = nums.size();

        // Running sum store karne ke liye ek new vector create kiya
        vector<int> pre(n);

        // First element ka running sum wahi element hoga
        pre[0] = nums[0];

        // Previous running sum ka use karke next running sum calculate karenge
        for (int i = 1; i < n; i++) {

            // Current element ko previous running sum mein add karenge
            pre[i] = nums[i] + pre[i - 1];
        }

        return pre;
    }
};

/*
Time Complexity  : O(n)
Space Complexity : O(n)
*/
