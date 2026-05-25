class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writePosition = 0;
        int endPosition = nums.size();

        while(writePosition < endPosition) {
            if(nums[writePosition] == val) {
                nums[writePosition] = nums[--endPosition];
            }
            else
                writePosition++;
        }

        return endPosition;
    }
};