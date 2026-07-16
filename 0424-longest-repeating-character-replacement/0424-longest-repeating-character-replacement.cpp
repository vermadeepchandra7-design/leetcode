class Solution {
public:
    int characterReplacement(string s, int k) {

        /*  Approach : (Variable Size Sliding Window)

            1. Expand the window by moving 'high'.
            2. Store the frequency of every character inside the current window.
            3. Find the maximum frequency character in the current window.
            4. If (Window Length - Maximum Frequency) > k,
               then the window becomes invalid, so shrink it by moving 'low'.
            5. Whenever the window is valid, update the answer.
        */

        int n = s.size();

        // Variable Size Window
        int low = 0, high = 0;
        int result = 0;

        vector<int> freq(26, 0);
        int maxFreq = 0;

        while (high < n) {

            // Including current character in the window
            freq[s[high] - 'A']++;

            // Updating the maximum frequency character in the current window
            maxFreq = max(maxFreq, freq[s[high] - 'A']);

            // Current window length
            int windowLength = high - low + 1;

            // Shrink the window until it becomes valid
            while (windowLength - maxFreq > k) {

                // Removing the leftmost character from the window
                freq[s[low] - 'A']--;

                low++;

                // Updating current window length
                windowLength = high - low + 1;
            }

            // Updating the maximum valid window length
            result = max(result, windowLength);

            // Expanding the window
            high++;
        }

        return result;
    }
};

/*
Time Complexity  : O(n)
                  (Each character enters and leaves the window at most once.)

Space Complexity : O(26) = O(1)
                  (Frequency array stores only uppercase English letters.)
*/