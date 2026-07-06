class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if((i % 2) != (nums[i] % 2)) {

                for(int j = i + 1; j < n; j++) {

                    if((i % 2) == (nums[j] % 2)) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }
        }

        return nums;
    }
};