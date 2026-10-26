class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        /* Kadane algorithim */
        int best_ending = nums[0] ;
        int ans = nums[0] ;
        int n = nums.size();

        for(int i=1 ; i < n ; i++){

           /* Now here we have two choices at each and every index are 
              1 . To add the current element at index i , in the best_ending 
              2 . To have the current element only at that particular index */
            int choice_1 = best_ending + nums[i] ;
            int choice_2 = nums[i] ;
            best_ending = max( choice_1 , choice_2 );
            ans = max(ans , best_ending);
        }
        return ans ;
    }
};