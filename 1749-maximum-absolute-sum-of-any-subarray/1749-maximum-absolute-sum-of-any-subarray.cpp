class Solution {
public:
/*
Approach:
1. maxEnding current index par end hone wale maximum subarray sum ko store karega.
2. minEnding current index par end hone wale minimum subarray sum ko store karega.
3. Maximum subarray sum ke liye current element ko previous maxEnding mein add karenge ya naya subarray start karenge.
4. Minimum subarray sum ke liye bhi same logic apply karenge, bas yahan minimum value select karenge.
5. maxSum poore traversal ke dauran maximum subarray sum maintain karega.
6. minSum poore traversal ke dauran minimum (most negative) subarray sum maintain karega.
7. Finally, maxSum aur minSum ki absolute values compare karke maximum value ans mein store karenge.
8. Return ans, jo given array ka maximum absolute subarray sum hoga.
*/
    int maxAbsoluteSum(vector<int>& nums) {

        int maxEnding = 0;
        int minEnding = 0;

        int maxSum = 0;
        int minSum = 0;

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {

        /* Maximum subarray sum using Kadane's Algorithm. ending at current index*/
            maxEnding = max(nums[i], maxEnding + nums[i]);

        /* Minimum subarray sum using Kadane's Algorithm. ending at current index*/
            minEnding = min(nums[i], minEnding + nums[i]);

        /* Update the overall maximum and minimum subarray sums. */
            maxSum = max(maxSum, maxEnding);
            minSum = min(minSum, minEnding);
        
        /* Store the maximum absolute subarray sum in ans. */
           ans = max( ans , max(abs(maxSum), abs(minSum)));
        }

        return ans;
    }
}; /*  Time complexity  : O(n) 
       Space complexity : O(1)  */
