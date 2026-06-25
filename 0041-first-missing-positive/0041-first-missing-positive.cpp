class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            int n = nums.size();

    for (int i = 0; i < n; i++) {

        // if nums[i] is within range [1, n] and nums[i] is
        // not placed at (nums[i]-1)th index in nums
        while (nums[i] >= 1 && nums[i] <= n
               && nums[i] != nums[nums[i] - 1]) {
                   
            // then swap nums[i] and nums[nums[i]-1]
            // to place nums[i] to its corresponding index
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // If any number is not at its corresponding index 
    // then it is the missing number
    for (int i = 1; i <= n; i++) {
        if (i != nums[i-1]) {
            return i;
        }
    }

    // If all number from 1 to n are present 
    // then n + 1 is smallest missing number
    return n + 1;
        
    }
};