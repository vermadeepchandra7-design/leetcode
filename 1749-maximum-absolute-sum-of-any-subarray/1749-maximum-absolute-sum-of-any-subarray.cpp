class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int maxSum = 0;
        int maxEnding = 0;

        int minSum = 0;
        int minEnding = 0;

        for(int i = 0; i < nums.size(); i++){

            // Maximum subarray sum
            maxEnding = max(0, maxEnding + nums[i]);
            maxSum = max(maxSum, maxEnding);

            // Minimum subarray sum
            minEnding = min(0, minEnding + nums[i]);
            minSum = min(minSum, minEnding);
        }

        // Return maximum absolute sum
        return max(maxSum, abs(minSum));
    }
};