class Solution {
public:
/*  Approach : Traverse the given vector and collect the count of 0 , 1 and 2 and than as per the  respective count value overwrite 0 , 1 and 2 in the given vector*/
    void sortColors(vector<int>& nums) {

        // solved by the better approach
        int n = nums.size();
        int zero_count = 0;
        int one_count = 0;
        int two_count = 0;

        for (int i = 0; i < n; i++) {
            // traversing vector for collecting the count of 0 , 1 , 2
            if (nums[i] == 0) {
                zero_count++;
            } else if (nums[i] == 1) {
                one_count++;
            } else {
                two_count++;
            }
        }
        int i = 0 ;
            while ( i < n) {
                // now putting 0 , 1 , 2 as per their respective count received
                while (zero_count) {
                     nums[i] = 0 ;
                     i++ ;
                    zero_count --;
                }
                while (one_count) {
                    nums[i] = 1 ;
                    i++ ;
                    one_count -- ;
                }
                while (two_count) {
                    nums[i] = 2 ;
                    i ++ ;
                    two_count -- ;
                }
            }
        
        return;
    } 
};     /*   Time complexity  :O(n)
            space complexity :O(1)    */ 