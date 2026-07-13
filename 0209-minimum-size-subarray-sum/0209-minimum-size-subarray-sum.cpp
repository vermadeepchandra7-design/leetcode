class Solution {
public:
    // Sliding Window Problem --> ( Type : Variable Window )

    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int low = 0, high = 0;
        int result = INT_MAX;
        int sum = 0;

        while (high < n) {

            // Expanding the window
            sum = sum + nums[high];

            // Shrinking the window until sum becomes less than target
            while (sum >= target) {

                int len = high - low + 1;
                result = min(result, len);

                sum = sum - nums[low];
                low++;
            }

            high++;
        }

        // If no valid subarray is found, return 0
        if (result == INT_MAX) {
            return 0;
        }

        return result;
    }
};

/*  Time complexity  : O(n)
    Space complexity : O(1)
*/