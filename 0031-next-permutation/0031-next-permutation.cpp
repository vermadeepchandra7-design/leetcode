class Solution {
public:
/* Approach:
 1. Find the pivot (first element from the right where nums[i] > nums[i-1]).
 2. If no pivot exists, reverse the entire array.
 3. Find the first element greater than the pivot from the right.
 4. Swap the pivot with that element.
 5. Reverse the suffix to get the next permutation.
   */

    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size() ;
        int pivot_idx = -1 ;

        for(int i = n-1 ; i > 0 ; i--){
            // Finding the index of pivot element 
            if(nums[i] > nums[i-1]){
                pivot_idx = i-1 ;
                break ;
              }
                 
            }
        if(pivot_idx != -1){
            int swap_idx ;
            for(int j = n-1 ; j > pivot_idx + 1 ; j--){
                if(nums[j] > nums[pivot_idx]){
                    swap_idx = j ;
                    break ;
                }
                
            }
            swap(nums[pivot_idx] , nums[swap_idx]) ;
            reverse(nums.begin()+pivot_idx+1 , nums.end());
         }
         else{
            reverse(nums.begin() , nums.end()) ;
         }
    }
};  /*    Time complexity  : O(n) 
          space complexity : O(1)    */