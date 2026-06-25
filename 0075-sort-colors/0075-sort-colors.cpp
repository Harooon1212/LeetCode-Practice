class Solution {
public:
    void sortColors(vector<int>& nums) {
        int SIZE=nums.size();
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < (SIZE - 1); j++) {
                if (nums[j] > nums[j+1]) {
                    int temp = nums[j]; // swap elements
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }
};