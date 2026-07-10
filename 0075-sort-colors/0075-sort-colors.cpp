class Solution {
public:  /*  Approach : Use three pointers where i places 0s at the beginning,             j traverses the array, and k places 2s at the end.
            If nums[j] is 0, swap it with nums[i] and move both i and j forward; if it is 1, simply move j forward.
            If nums[j] is 2, swap it with nums[k] and decrement k without moving j, since the swapped element must be checked again.
*/

    void sortColors(vector<int>& nums) {
        
        /* : Optimized solution :  */
        int n = nums.size() ;
        int i = 0 ;     // for handling 0
        int j = 0 ;    // for handling 1
        int k = n-1 ; // for handling 2

        while( j <= k ){

            if(nums[j] == 1){
                j ++ ;
            }
            else if(nums[j] == 2){
                swap(nums[j] , nums[k]) ;
                k -- ;
            }
            else{
                // nums[j] == 0
                swap(nums[j] , nums[i]) ;
                    i ++ ;
                    j ++ ;
                }
            }
        }
    
};     /*      Time complexity    : O(n)  
               space complexity   : O(1)*/