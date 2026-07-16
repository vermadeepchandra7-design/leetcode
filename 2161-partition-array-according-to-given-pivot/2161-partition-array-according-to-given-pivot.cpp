class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
     // Brute force solution 
     int n = nums.size() ;
     vector<int>v1 ;
     vector<int>v2 ;
     for(int i = 0 ; i < n ; i++){
    // T.C = O(n)
        if(nums[i] < pivot){
            v1.push_back(nums[i]) ;
        }
        else if(nums[i] > pivot){
            v2.push_back(nums[i]) ;
        }
     }
     // puting elements equals to pivot in the vector v1 
     for(int i = 0 ; i < n ; i++){
        // T.C = O(n)
        if(nums[i] == pivot){
            v1.push_back(nums[i]);
        }
     }
      
     // Merging v1 and v2
     v1.insert(v1.end() , v2.begin() , v2.end()) ;
     // T.C = O(n) : for merge operation

     return v1 ;
    }
};  /*  Time complexity  : O(n) 
        space complexity : O(n)  */