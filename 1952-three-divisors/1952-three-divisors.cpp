class Solution {
public:
    bool isThree(int n) {

        if( n == 0){
            return 0 ;
        }
        int count = 0 ;
        for(int i = 1 ; i <= n ; i ++){
            if(n % i == 0){
                count ++ ;
            }
        }
        if(count == 3){
            return 1 ; 
        }
        
        return 0 ;
    }
};  /*   Time complexity  : O(n) 
        space complexity  : O(1)      */