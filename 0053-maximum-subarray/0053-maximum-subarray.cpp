class Solution {
public:
/*
Approach:
1. Pehle best_ending aur ans ko nums[0] se initialize karo.
2. Array ko index 1 se last index tak traverse karo.
3. Har index par decide karo ki purani subarray continue karni hai ya nahi.
4. Choice 1: Current element ko best_ending mein add karke purani subarray continue karo.
5. Choice 2: Current element se ek nayi subarray start karo.
6. Dono choices mein se maximum sum ko best_ending mein store karo.
7. Har iteration mein ans ko update karo, taaki ab tak ki maximum sum store rahe.
8. Loop ke end mein ans return karo, jo maximum subarray sum hai.
*/
    int maxSubArray(vector<int>& nums) {

        /* Kadane Algorithm */
        int best_ending = nums[0];
        int ans = nums[0];
        int n = nums.size();

        for(int i = 1; i < n; i++){

            /* At every index, we have two choices:
               1. Continue the previous subarray by adding nums[i].
               2. Start a new subarray from nums[i].

               In dono me se jiski sum maximum hogi,
               best_ending ko usse update kar denge. */
            int choice_1 = best_ending + nums[i];
            int choice_2 = nums[i];

            best_ending = max(choice_1, choice_2);

            /* Ab tak ki maximum subarray sum ko update karo. */
            ans = max(ans, best_ending);
        }

        return ans ;
    }
}; /*  Time complexity  : O(n) 
       Space complexity : O(1)  */