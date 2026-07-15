class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        // variable size window
        int low = 0, high = 0;
        int result = 0;

        unordered_map<char, int> mp;

        while (high < n) {

            // including high in the window
            mp[s[high]]++;

            // current window size
            int k = high - low + 1;

            // shrink the window until all characters become unique
            while (mp.size() < k) {

                mp[s[low]]--;

                if (mp[s[low]] == 0) {
                    mp.erase(s[low]);
                }

                low++;

                // k depends on low
                k = high - low + 1;
            }

            // valid window (all characters are unique)
            if (mp.size() == k) {

                int len = high - low + 1;
                result = max(result, len);
            }

            // expand the window
            high++;
        }

        return result;
    }
};

/*
Time Complexity  : O(n)
Space Complexity : O(k)

where k is the number of distinct characters stored in the unordered_map.
*/