class Solution {
public:
    /*
    Approach:
    1. Initialize a window of size k.
    2. Calculate the sum of the first k elements.
    3. Calculate the average of the current window.
    4. Check if average >= threshold.
    5. If yes, increment the subarray count.
    6. Slide the window one position forward.
    7. Remove the outgoing element and add the incoming element.
    8. Repeat until all windows are processed and return the count.
    */
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {

        /* Fixed size sliding window problem */

        int n = nums.size();
        int low = 0;
        int high = k - 1;
        int count_subArray = 0;
        int sum = 0;
        /* Calculating first window */
        for (int i = low; i <= high; i++) {

            sum = sum + nums[i];
        }
        /* Now calculating rest of windows */
        while (high < n) {
            int avg = sum / k;
            if (avg >= threshold) {

                count_subArray++;
            }
            /* sliding the window in the given array*/
            low++;
            high++;
            if (high == n) {
                break;
            }
            sum = sum - nums[low - 1];
            sum = sum + nums[high];
        }
        return count_subArray;
    }
}; /*  Time complexity  : O(n)
       space complexity : O(1) */