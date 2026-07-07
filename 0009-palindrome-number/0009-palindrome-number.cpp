class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0){
            // if x is negative than x can not be palindrome so return 0 ;
            return 0;
        }
        int num = x  , remainder ; 
        long long ans = 0 ;
        while( num > 0){
            // when x is positive 
            remainder = num % 10 ;
            num = num / 10 ;
            ans = ans * 10 + remainder ;

        }
        if( ans == x){
            return 1 ;
        }
        else{
            return 0 ;
        }
    }
};