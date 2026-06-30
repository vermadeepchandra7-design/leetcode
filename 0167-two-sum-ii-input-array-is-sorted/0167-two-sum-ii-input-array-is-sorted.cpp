class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

         /*  optimized version of code  
         ------------------------------------
         Approach: Use two pointers, one starting from the left end and the other from the right end of the array. Compare their sum with the target and move the pointers accordingly—move the right pointer left when the sum is too large and the left pointer right when the sum is too small. When the sum becomes equal to the target, return the corresponding indices.
           */
        int n = nums.size() ;
        int i = 0 , j = n - 1 ;
        while( i  < n  && j >= 0){
           
           if( i  == j ){
            continue ;
        }
        if( nums[i] + nums[j] > target ){
            j -- ;
        }
        else if( nums[i] + nums[j] < target ){
            i ++ ;
            }
        else{
            return { i+1 , j+1 };
        }
            
        }
        return { } ;
        
    }
}; /*  Time complexity  : O(n) 
       space complexity : O(1)*/