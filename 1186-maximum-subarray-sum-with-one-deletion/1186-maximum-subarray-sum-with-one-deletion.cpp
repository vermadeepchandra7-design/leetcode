class Solution {
public:
    /*  ( :: Kadane`s algorithm :: )
    Approach:
    1. noDelete, oneDelete aur result initialize karo.
    2. Array ko index 1 se traverse karo.
    3. Previous noDelete aur oneDelete ki values save karo.
    4. noDelete mein purani subarray continue karo ya nayi start karo.
    5. oneDelete mein current element ko delete karne ka option lo.
    6. Agar pehle deletion ho chuka hai, toh current element ko add karke
    subarray continue karo.
    7. noDelete aur oneDelete mein se maximum lekar result update karo.
    8. Loop ke baad result return karo.
    */
    int maximumSum(vector<int>& nums) {

        /* Maximum Subarray Sum with at most One Deletion */
        int n = nums.size();

        /* Initial values: First element se subarray start karenge.
           oneDelete ko INT_MIN rakhenge kyunki abhi deletion nahi hua. */
        int noDelete = nums[0];
        int oneDelete = INT_MIN;
        int result = nums[0];

        for (int i = 1; i < n; i++) {

            /* Previous index ki values save karo,
               taaki dono states previous values se calculate ho sakein. */
            int prev_noDelete = noDelete;
            int prev_oneDelete = oneDelete;

            /* CASE 1: Koi element delete nahi hua.
               Purani subarray continue karo ya current element se nayi shuru
               karo. */
            noDelete = max(prev_noDelete + nums[i], nums[i]);

            /* CASE 2: At most one element delete hua hai.
               Choice 1: Current element delete karo.
               Choice 2: Pehle se deleted subarray ko current element ke saath
               continue karo. */
            oneDelete = prev_noDelete;

            if (prev_oneDelete != INT_MIN) {
                oneDelete = max(oneDelete, prev_oneDelete + nums[i]);
            }

            /* Dono states mein se maximum sum lekar overall answer update karo.
             */
            result = max(result, max(noDelete, oneDelete));
        }

        /* Maximum subarray sum return karo. */
        return result;
    }
}; /*    Time complexity   : O(n)
         Space complexity  : O(1)  */
