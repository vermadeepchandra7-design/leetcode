class Solution {
public:
    void nextPermutation(vector<int>& nums) {

      /*  Brute force : */
      int n = nums.size() ;
     /* By next_permutation() function in STL */ 
     next_permutation(nums.begin() , nums.end());
    }
};