class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // Brute force solution 
        int n = nums.size() ;
        vector<int>less_pivot ;
        vector<int>equal_pivot ;
        vector<int>greater_pivot ;
        int i = 0 ;
        while(i < n){
            if(nums[i] == pivot){
                equal_pivot.push_back(nums[i]) ;
            }
            else if(nums[i] < pivot){
                less_pivot.push_back(nums[i]) ;
            }
            else{
                greater_pivot.push_back(nums[i]);
            }
            i++ ;
        }
        // Merging all the vectors togather
        for(int & num : equal_pivot){
            less_pivot.push_back(num);
        }
        for(int & num : greater_pivot){
            less_pivot.push_back(num);
        }
        return less_pivot ;
    }
};  /*  Time  Complexity : O(n) 
        space Complexity : O(n)   */