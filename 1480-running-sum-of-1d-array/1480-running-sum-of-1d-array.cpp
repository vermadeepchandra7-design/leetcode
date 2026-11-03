class Solution {
public:
    /*1. Sabse pehle nums array ka size n calculate karenge.
      2. Running sum store karne ke liye ek n-size ka new vector pre create
      karenge.
      3. Outer loop i = 0 se n-1 tak chalega, jo har index ko access karega.
      4. Har iteration mein sum = 0 initialize karenge, taaki fresh calculation
      start ho.
      5. Inner loop j = 0 se i tak chalega, jo current index tak ke saare
      elements access karega.
      6. Har iteration mein nums[j] ko sum mein add karte jayenge.
      7. Inner loop complete hone ke baad calculated sum ko pre[i] mein store
      kar denge.
      8. Finally, pre vector return kar denge, jisme har index ka running sum
      stored hoga.*/
    vector<int> runningSum(vector<int>& nums) {

        /* Brute Force Approach for Running Sum */

        int n = nums.size();

        // Running sum store karne ke liye ek n-size vector banaya
        vector<int> pre(n);

        // Har index ke liye us index tak ka sum calculate karenge
        for (int i = 0; i < n; i++) {

            int sum = 0;

            // Current index tak ke saare elements ka sum calculate hoga
            for (int j = 0; j <= i; j++) {

                sum += nums[j];
            }

            // Calculated sum ko corresponding index par store kiya
            pre[i] = sum;
        }

        return pre;
    }
};

/*
Time Complexity  : O(n^2)
Space Complexity : O(n)
*/
