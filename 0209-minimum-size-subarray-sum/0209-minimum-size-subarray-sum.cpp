class Solution {
public:
    /* Approach (Sliding Window - Variable Size Window)
     { Code Written in Fang companies }
    1. Start with a window of size 0 using two pointers: low and high.
    2. Move high forward and keep adding elements to the window sum.
    3. As soon as the sum becomes greater than or equal to target,
       the current window is a valid answer.
    4. Store its length as the minimum answer.
    5. Remove elements from the left (move low forward) to make the
       window as small as possible while the sum is still >= target.
    6. Repeat until all elements are visited.
    7. If no valid window is found, return 0; otherwise, return the
       minimum length.

    Time Complexity  : O(n)
    Space Complexity : O(1)

    */

    int minSubArrayLen(int target, vector<int>& nums) {

        // Sliding Window (Variable Size)
        int n = nums.size();

        int low = 0;
        int high = 0;

        int sum = 0;
        int result = INT_MAX;

        while (high < n) {

            // Include the current element in the window
            sum += nums[high];

            // Shrink the window while it is a valid answer
            while (sum >= target) {

                int len = high - low + 1;

                // Store the minimum valid window length
                result = min(result, len);

                // Remove the leftmost element and shrink the window
                sum -= nums[low];
                low++;
            }

            // Expand the window
            high++;
        }

        // No valid window found
        if (result == INT_MAX) {
            return 0;
        }

        return result;
    }
};