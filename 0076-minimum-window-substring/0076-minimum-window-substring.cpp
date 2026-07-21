class Solution {
public:
    string minWindow(string s, string t) {

    /*
    Approach (Sliding Window)

    1. Store the frequency of all characters of string 't' in a map.

    2. Expand the window by moving 'high' until all characters
       of 't' are present in the current window.

    3. Once a valid window is found, shrink it by moving 'low'
       to remove extra characters and make the window as small
       as possible.

    4. Whenever a smaller valid window is found, store its
       starting index and size.

    5. Continue this process until the entire string is scanned,
       then return the smallest valid window.
*/
        int n = s.length();

        // Edge Case
        if (t.length() > n) {
            return "";
        }

        // Stores frequency of every character of string 't'
        unordered_map<char, int> mp;

        for (char &ch : t) {
            mp[ch]++;
        }

        // Number of characters still required
        int required_count = t.length();

        // Variable Size Sliding Window
        int low = 0;
        int high = 0;

        // Stores the minimum valid window
        int window_size = INT_MAX;
        int start_index = 0;

        while (high < n) {

            // Include current character in the window
            char ch = s[high];

            // If this character was required, reduce the remaining count
            if (mp[ch] > 0) {
                required_count--;
            }

            // Decrease its frequency
            mp[ch]--;

            // Current window is valid
            while (required_count == 0) {

                int current_window_size = high - low + 1;

                // Update answer only if a smaller window is found
                if (current_window_size < window_size) {
                    window_size = current_window_size;
                    start_index = low;
                }

                // Remove leftmost character from the window
                mp[s[low]]++;

                // If frequency becomes positive,
                // this character is now missing from the window
                if (mp[s[low]] > 0) {
                    required_count++;
                }

                // Shrink the window
                low++;
            }

            // Expand the window
            high++;
        }

        // No valid window found
        if (window_size == INT_MAX) {
            return "";
        }

        // Extract the minimum window substring
        string answer = s.substr(start_index, window_size);

       return answer;
    }
};

/*
Time Complexity : O(|S| + |T|)
- Every character is visited at most twice
  (once by 'high' and once by 'low').

Space Complexity : O(K)
- K = Number of distinct characters stored in the map.
*/