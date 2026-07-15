class Solution {
public:
/* Approach (Variable Size Sliding Window)

1. High ko move karke current fruit ko window me include karo.
2. Agar fruit types 2 se jyada ho jaye, to low ko move karke window shrink karo.
3. Window me at most 2 fruit types hone par maximum length update karo.
4. Puri array traverse hone tak process repeat karo.
*/
    int totalFruit(vector<int>& fruits) {
          // BY : Sliding Window 
         int n = fruits.size() ;
         // Variable size Window 
         int low = 0 , high = 0 ; 
         int result = 0 ;
         unordered_map<int , int>mp;

         while(high < n){
            // including high in reqired information 
            mp[fruits[high]]++ ;
            while(mp.size() > 2 ){

                mp[fruits[low]]--;
                if( mp[fruits[low]] == 0){
                    mp.erase(fruits[low]) ;
                }
                low++ ;
            }
            if(mp.size() <= 2){

                int len = (high - low)+1 ;
                result = max(result , len) ;
            }
            high ++ ;
         }
        return result ;
    }
};  /*    Time complexity  : O(n) 
          space complexity : O(1)  */