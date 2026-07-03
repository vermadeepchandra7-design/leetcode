class Solution {
public:
    bool checkIfPangram(string sentence) {

        /*  The initial approach : 
                        First of all start iterating the each latter of the string and than
    than stubract (a) from its index to get the index of that latter , and after that make 1 at position in the extra taken array of size 26 
    */
    vector<bool>alpha(26 , 0) ;
    for(int i = 0 ; i < sentence.size() ; i++){

        int idx = sentence[i] - 'a' ;
        alpha[idx] = 1 ;
        
    }
    for( int i = 0 ; i < alpha.size() ; i++){
        
        if(alpha[i] == 0){
            return 0 ;
        }
    }

    return 1 ;    
    }
}; /*   Time complexity  : O(n)  
        space complexity : O(n)  */