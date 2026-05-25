class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writePosition = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[writePosition] = nums[i];
                writePosition++;
            }
        }
        return writePosition;
    }
};