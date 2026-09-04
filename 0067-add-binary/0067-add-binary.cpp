class Solution {
public:
    /* Approach :

    1. Start from the last digit of both binary strings.
    2. Initialize carry = 0 and an empty result string.
    3. Add the current digits of both strings with carry.
    4. Store sum % 2 as the current binary digit.
    5. Calculate the carry using sum / 2.
    6. Move to the previous digits of both strings.
    7. If any carry remains, add '1' to the result.
    8. Reverse the result and return it.
    */
    string addBinary(string a, string b) {

        // Start from the last digit of both strings
        int m = a.length() - 1;
        int n = b.length() - 1;

        string result = "";
        int carry = 0;

        // Continue until all digits of both strings are processed
        while (m >= 0 || n >= 0) {

            // Start the sum with the carry from the previous step
            int sum = carry;

            // Add current digit of string a
            if (m >= 0) {
                sum += a[m] - '0';
                m--;
            }

            // Add current digit of string b
            if (n >= 0) {
                sum += b[n] - '0';
                n--;
            }

            // Store the binary digit (0 or 1)
            result.push_back((sum % 2) + '0');

            // Calculate carry for the next position
            carry = sum / 2;
        }

        // If carry is still left, add it to the result
        if (carry) {
            result.push_back('1');
        }

        // Digits were added from right to left, so reverse them
        reverse(result.begin(), result.end());

        return result;
    }
}; /*
Time Complexity: O(max(n, m))
Reason: We process every digit of both binary strings once.

Space Complexity: O(max(n, m))
Reason: The result string stores the final binary sum.
*/