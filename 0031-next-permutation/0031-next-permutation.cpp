class Solution {
public:
    void nextPermutation(vector<int>& nums) {

      /*  Brute force : */
      int n = nums.size() ;
     /* By next_permutation() function in STL */ 
     next_permutation(nums.begin() , nums.end());
    }
}; /* Time Complexity : O(n)
      Reason: next_permutation() scans the array and reverses a part of it once.

      Space Complexity : O(1)
      Reason: It modifies the array in-place without using any extra space.
*/