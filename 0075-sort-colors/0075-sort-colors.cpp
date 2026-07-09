class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // Brute force solution 
        int n = nums.size() ;
        sort(nums.begin() , nums.end());

        return  ;
    }
};  /*    Time complexity    : O(nlogn)
          space complexity   : O(1)  */