class Solution {
public:
/* Approach:
1. Reverse the entire string to bring the words in reverse order.
2. Traverse the string and copy each word toward the front.
3. Reverse each individual word to restore its original character order.
4. Add a space after each processed word and continue until all words are processed.
5. Remove the extra trailing space and return the final string.*/
    string reverseWords(string s) {

        int n = s.size();

        // Reverse the complete string first
        reverse(s.begin(), s.end());

        // i: traverses string, l/r: track current word range
        int i = 0;
        int l = 0, r = 0;

        while (i < n) {

            // Copy current word to the front of the string
            while (i < n && s[i] != ' ') {
                s[r] = s[i];
                i++;
                r++;
            }

            // Reverse the current word to restore its characters
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);

                // Add a space after the current word
                s[r] = ' ';
                r++;

                // Set starting position for the next word
                l = r;
            }

            // Skip the space between two words
            i++;
        }

        // Remove the extra space at the end
        s = s.substr(0, r - 1);

        return s;
    }
}; /*  Time complexity  : O(n) 
       space complexity : O(1) */