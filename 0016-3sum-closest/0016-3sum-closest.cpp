class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       // solved by the brute force approach 
       int n = nums.size() ;
       sort(nums.begin() , nums.end()) ;
       long long  closest_sum = INT_MAX ;
       for(int i = 0 ; i < n  ; i++){

          for(int j = i + 1 ; j < n; j++){

            for(int k = j + 1 ; k < n ; k++){

                int sum = nums[i] + nums[j] + nums[k] ; 
                long long diff_1 = abs(target - sum) ; 
                long long diff_2 = abs(target - closest_sum) ;
                if(diff_1 < diff_2){

                    closest_sum = sum ;
                }

                  }
             }
       }
       return closest_sum ;
    }
}; /*   Time complexity   : O(n^3) 
        space complexity  : O(1)    */ 