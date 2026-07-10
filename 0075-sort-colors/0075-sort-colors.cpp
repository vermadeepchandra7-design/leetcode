class Solution {
public:

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