class Solution {
public:
/* isVowel function for checking vowel in the substring */
bool isVowel(char & ch){
    if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'){
        return true ;
    }
    else{
        return false ;
    }
}
    int maxVowels(string s, int k) {
        /*
Approach:( Optimized Solution )

1. Use two pointers i and j to create a window of size K.
2. Move j forward and count the vowel whenever s[j] is a vowel.
3. When window size becomes K, update the maximum vowel count.
4. Remove the leftmost character s[i] from the window.
5. If s[i] is a vowel, decrease the vowel count.
6. Move both pointers forward and repeat until j reaches the end.
7. Return the maximum vowel count as the answer.
*/

       int n = s.length() ;
       /* Two pointers for Making Window of size k */
       int i = 0 , j = 0 ; 
       int count = 0 ;
       int result = 0 ;

       while( j < n ){

        if( isVowel(s[j])){
            count ++ ;
        }
        if( j-i+1 == k){
            result = max(result , count) ;
            if(isVowel(s[i])){
                count -- ;
            }
            i++ ;
        }
        j ++ ;
       }
       return result ;
    }
}; /*  Time complexity  : O(n) 
       space complexity : O(1) */