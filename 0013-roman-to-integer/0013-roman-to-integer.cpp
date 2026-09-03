class Solution {
    /* Approach :
1. Create num() function to return the integer value of each Roman character.
2. Initialize sum = 0 and idx = 0.
3. Traverse the string up to the second-last character.
4. Compare the current character with the next character.
5. If current value is smaller, subtract it from sum.
6. Otherwise, add the current value to sum.
7. Move to the next character and repeat.
8. Add the last character's value and return sum.
*/
public:
    // Function to convert a Roman character into its corresponding integer
    // value
    int num(char c) {

        if (c == 'I')
            return 1;

        else if (c == 'V')
            return 5;

        else if (c == 'X')
            return 10;

        else if (c == 'L')
            return 50;

        else if (c == 'C')
            return 100;

        else if (c == 'D')
            return 500;

        else
            return 1000; // 'M'
    }

    int romanToInt(string s) {

        int sum = 0;
        int idx = 0;

        // Compare the current character with the next character
        while (idx < s.size() - 1) {

            // If current value is smaller than next value, subtract it
            if (num(s[idx]) < num(s[idx + 1])) {
                sum -= num(s[idx]);
            } else {
                // Otherwise, add the current value
                sum += num(s[idx]);
            }

            idx++;
        }

        // Add the value of the last character
        sum += num(s[idx]);

        return sum;
    }
}; /*  Time Complexity  : O(n)
       Space Complexity : O(1) */