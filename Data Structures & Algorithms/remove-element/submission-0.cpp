class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int remaining = nums.size();
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == val) {
                remaining--;
                for(int j = i; j < nums.size() - 1; j++) {
                    nums[j] = nums[j+1];
                }
            }
        }
        return remaining;
    }
};