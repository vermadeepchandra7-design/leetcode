class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       // By Two Pointer Approach 
       int i = 0 , j = 1 ;
       int n = nums.size() ;
       while(i < n && j < n){
               
               if((i % 2 == 0 && nums[i] % 2 == 0) ){
                   i = i+2 ;
                   
               }
               else if(j % 2 != 0 && nums[j] % 2 != 0 )
               {
                j = j+2 ;
               }
               else{
                swap(nums[i] , nums[j]) ;
                i = i+2 ;
                j = j+2 ;
               }
       }

       return nums ;

    }
}; /*   Time complexity  : O(n) 
        space complexity : O(1)     */