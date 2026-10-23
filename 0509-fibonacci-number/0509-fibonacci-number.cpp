class Solution {
public:
    int fib(int n) {
        /* base condition */
        if( n <= 1){
            return n ;
        }
        /* using recursive function */
        return fib(n-1)+fib(n-2) ;
    }
};/* Time Complexity : O(2^n)
     Space Complexity: O(n)  */