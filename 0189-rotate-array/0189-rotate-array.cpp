class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       /* Approach : Reverse the entire given array and than after it reverse the
                     first k elements and than after that reverse from index begin()+k to end of the array  */
        int n = nums.size() ;
        k = k%n ;
        reverse(nums.begin() , nums.end()) ;
        // Reverse the given array
        reverse(nums.begin() , nums.begin()+k);
        // Reverse first k elements of the reversed array
        reverse(nums.begin()+k , nums.end());

        
    }
}; /*          Time complexity   : O(n)
               space complexity  : O(1)    */ 