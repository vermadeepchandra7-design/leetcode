class Solution {
public:
/* Approach (Variable Size Sliding Window)

1. High ko move karke current fruit ko window me include karo.
2. Agar fruit types 2 se jyada ho jaye, to low ko move karke window shrink karo.
3. Window me at most 2 fruit types hone par maximum length update karo.
4. Puri array traverse hone tak process repeat karo.
*/
    int totalFruit(vector<int>& fruits) {
        // By : sliding window
        int n = fruits.size() ;
        int result = 0 ;
        // variable size window ( Mike solution )
        int low = 0 , high = 0 ;
        unordered_map<int , int>mp ;

        while(high < n){
            // including high in the current window 
            mp[fruits[high]]++ ;
            if(mp.size() <= 2){
                int len = (high - low) + 1 ;
                result = max(result , len) ;
            }
            else{
                /* mp.size() > 2 means we have wrong window size which is not    required so discard low from the current window*/
                mp[fruits[low]]-- ;
                if(mp[fruits[low]] == 0){
                    mp.erase(fruits[low]) ;
                }
               // after discarding low from the current window incresase the low pointer 
                low ++ ;

                
            }
            high ++ ;
        }
        return result ;
    }
};  /*     Time complexity  : O(n)  
           space complexity : O(k) 
                            where k = size of unorderd map */
