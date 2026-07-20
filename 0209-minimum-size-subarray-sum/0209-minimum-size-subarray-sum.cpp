class Solution {
public:
/* Approach (Sliding Window - Variable Size Window)

1. Start with a window of size 0 using two pointers: low and high.
2. Move high forward and keep adding elements to the window sum.
3. As soon as the sum becomes greater than or equal to target,
   the current window is a valid answer.
4. Store its length as the minimum answer.
5. Now remove elements from the left (move low forward) to make
   the window as small as possible while the sum is still >= target.
6. Repeat this process until all elements are visited.
7. If no valid window is found, return 0; otherwise, return the minimum length.

Time Complexity  : O(n)
Space Complexity : O(1)

*/
    int minSubArrayLen(int target, vector<int>& nums) {
       /* Sliding window {Minimum Window Question}*/ 
       int n = nums.size() ;
      /* Variable size Window */
      int low = 0 , high = 0 ;
      int sum = 0 , result = INT_MAX ;

      while(high < n){
        // including high in the sum of current window
        sum += nums[high] ;

        while(sum >= target){
            int len = high - low + 1 ;
            // storing Correct Answer
            result = min(result , len) ;
        /* Removing low from the Current window  in search of more better answer    than cureent correct answer  */
        sum -= nums[low];
        low ++ ;
        }
        
        high ++ ;
      }
      /* if sum of window not greater or equal to the target than in this case
           result contain the value by which it is initialized */
      if(result == INT_MAX){
         return 0 ;
      }
      return result ;
    }
};/*  Time complexity  : O(n) 
      Space complexity : O(1)  */