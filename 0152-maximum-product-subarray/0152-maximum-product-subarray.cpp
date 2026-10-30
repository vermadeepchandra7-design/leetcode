
class Solution {
public:
/*
Approach:
1. Pehle min_ending, max_ending aur ans ko nums[0] se initialize karo.
2. Array ko index 1 se last index tak traverse karo.

3. Har index par 3 choices consider karo:
   Current element se nayi subarray start karna,
   previous minimum product ko current element se multiply karna,
   previous maximum product ko current element se multiply karna.

4. Teeno choices mein se maximum product nikal kar max_ending mein store karo.
5. Teeno choices mein se minimum product nikal kar min_ending mein store karo.
6. Minimum product ko bhi track karo kyunki negative × negative positive ban sakta hai.
7. Har iteration mein max_ending ko ans ke saath compare karke maximum product update karo.
8. Loop complete hone ke baad ans return karo, jo maximum product subarray ka answer hai.
*/
    int maxProduct(vector<int>& nums) {

        /* Maximum Product Subarray - Kadane's Algorithm */
        int n = nums.size();
        int min_ending = nums[0];
        int max_ending = nums[0];
        int ans = nums[0];

        for(int i = 1; i < n; i++){

            /* Har index par hamare paas 3 choices hain:
               1. Current element se nayi subarray start karna.
               2. Previous minimum product ko current element se multiply karna.
               3. Previous maximum product ko current element se multiply karna.

               Teeno choices mein se maximum aur minimum product nikalenge. */

            int choice_1 = nums[i];
            int choice_2 = min_ending * nums[i];
            int choice_3 = max_ending * nums[i];

            /* Teeno choices mein se maximum product ko max_ending mein store karo. */
            max_ending = max(choice_1, max(choice_2, choice_3));

            /* Teeno choices mein se minimum product ko min_ending mein store karo. */
            min_ending = min(choice_1, min(choice_2, choice_3));

            /* Ab tak ka maximum product update karo. */
            ans = max(ans, max_ending);
        }

        return ans;
    }
}; /*  Time complexity  : O(n) 
       Space complexity : O(1)  */
