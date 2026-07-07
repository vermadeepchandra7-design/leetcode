class Solution {
public:
    long long sumAndMultiply(int n) {

 // solving this question by  string , beacause it is to traverse a number when it is   integer 
       string s = to_string(n) ;
       // converted int n to the string
       long long ans = 0 , sum = 0 ;
       for( int i = 0 ; i < s.length() ; i++){
         int digit = s[i] - '0' ;
         if(digit != 0){
            sum += digit ;
            ans = ans*10 + digit ;
         }
       }

       return (sum*ans) ;
        
    }
};