class Solution {
public:
    vector<int> diStringMatch(string s) {

        // Approach:
        // 1. Initialize two pointers: low = 0 and high = n.
        // 2. Traverse the string using a while loop.
        // 3. If current character is 'I', place low and increment low.
        // 4. If current character is 'D', place high and decrement high.
        // 5. Append the last remaining number.

        int n = s.size();

        vector<int> ans;

        // Two pointers
        int low = 0, high = n;
        int i = 0;

        while(i <= n) {

            if(s[i] == 'I') {
                ans.push_back(low);
                low++;
            }
            else {
                ans.push_back(high);
                high--;
            }

            i++;
        }

        return ans;
    }
};

/*
Time Complexity: O(n)

Space Complexity: O(n)
*/