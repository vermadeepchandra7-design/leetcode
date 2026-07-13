class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       // Optimized solution :(Sliding Window)
       int n = nums.size() ;
       int sum = 0 , result = INT_MAX ;
       int low = 0 ;
       int high = 0 ;
/* IN variable size window always set :  low = 0 and high = 0 too
       so the length of the sub-array calculated as :
                        length = (high - low) + 1 */
      while(high < n){
          
          // Hiring in amazon 
          sum = sum + nums[high] ;

          while(sum >=target){
/*this condition means work can be done with the hired people so store their    length and start firing */
           int len = high - low + 1 ;
           result = min(result , len);
// storing lenght of the sub-array in the result 
            sum = sum - nums[low] ;
            low ++  ;
// firing from Amazon because work can be done with the less number of employees
          }
          high ++ ;
// new hiring in amazon 
      }
    if(result == INT_MAX){
        return 0 ;
    }
    return result ;
    }
}; /*   Time complexity  : O(n) 
        space complexity : O(1)     */