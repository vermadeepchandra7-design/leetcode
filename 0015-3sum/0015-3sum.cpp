class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size() ;
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>> result ;
    // This vector is created for storing triplets
        for(int i = 0 ; i < n - 2 ; i++){
            if( i > 0 &&nums[i] == nums[i-1]){
                continue ;
            // This is to avoid duplication
            }
            int left = i + 1 ;
            int right = n - 1 ;
            int sum = -1 * nums[i] ;

            while(left  < right){

                int temp_sum = nums[left] + nums[right] ;

                if(temp_sum == sum ) {
                    result.push_back({nums[i] , nums[left] , nums[right]}) ;
                    left ++ ;
                    right -- ;
                
                while(left < n && nums[left] == nums[left - 1]){
                    left ++ ;
                }
                while(right >= 0 && nums[right] == nums[right + 1]){
                    right -- ;
                }
    /* At above this while loop applied for removing duplication of pairs*/
                }

                else if(temp_sum < sum){
                    left ++ ;
                } 
                else{
                    right -- ;
                }        
                           }

        }
        return result ;
    }
};