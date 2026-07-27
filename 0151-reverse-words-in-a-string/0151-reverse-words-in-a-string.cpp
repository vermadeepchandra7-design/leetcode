class Solution {
public:
/* Approach (Using stringstream)

1. Put the given string into a stringstream.
2. Extract one word at a time using the >> operator.
3. Add each extracted word at the beginning of the result string.
4. Continue until all words are processed.
5. Remove the extra space at the end and return the final string.
*/
    string reverseWords(string s) {

        // Brute force solution (Using stringstream)
        stringstream s_s(s);

        string token;
        string result = "";

        // Extract each word and add it at the beginning
        while (s_s >> token) {

            result = token + " " + result;
        }

        // Remove the extra space at the end
        result.pop_back();

        return result;
    }
}; /*   Time complexity  : O(n)  
        space complexity : O(n) */