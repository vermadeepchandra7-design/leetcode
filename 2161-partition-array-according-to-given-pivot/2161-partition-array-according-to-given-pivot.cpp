class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // Better Approach 
        int n = nums.size() ;
        int count_less = 0 ;
        int count_equal = 0 ;
        for(int & num  : nums){
            // for getting count of elements in the given vector 
            if( num < pivot){
                count_less ++ ;
            }
            else if(num == pivot){
                count_equal ++ ;
            }
        }
        int i = 0 ; // handle elements less than pivot 
        int j = count_less ; // handle elments equal to pivot
        int k = count_less + count_equal ; // handle elements greater than pivot
        // creating resultant vector 
        vector<int>result(n) ;
        for(int & num : nums){
            // now storing all the values in the resultant
            if(num < pivot){
                result[i] = num ;
                i++ ;
            }
            else if(num == pivot){
                result[j] = num ;
                j++ ;
            }
            else{
                result[k] = num ;
                k++ ;
            }
        }

        return result ;
    }
}; /*  Time complexity  : O(n) 
       space complexity : O(n) */