class Solution {
public:
/*  Approach : Another Better Approach

1. Create a result vector of size n.
2. Use two pointers (i, j) to traverse nums from both ends.
3. Use two pointers (i_, j_) to fill the result vector from both ends.
4. Place elements < pivot from the left and > pivot from the right.
5. Fill the remaining positions with pivot.
6. Return the result vector.
*/
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // Another Better Approach
        int n = nums.size() ;
        /* Pointers for traversing the the given vector */
        int i = 0 ; 
        int j = n-1 ;
        /* Vector for storing result */
        vector<int>result(n) ;
        /* Pointers for travesing in result vector */
        int i_ = 0 ;
        int j_ = n-1 ;
        /*using while loop for the traversal*/
        while( i < n && j >= 0){
            
            if(nums[i] < pivot){
                result[i_] = nums[i] ;
                i_ ++ ;
            }
             if(nums[j] > pivot){
                result[j_] = nums[j] ;
                j_ -- ;
            }
            i ++ ;
            j -- ;
        }
        /* Now filling pivot element in the vector */
        while(i_ <= j_ ){
            result[i_] = pivot ;
            i_ ++ ;
        }
       return result ; 
    }
}; /*  Time complexity  : O(n)  
       space complexity : O(1)   */