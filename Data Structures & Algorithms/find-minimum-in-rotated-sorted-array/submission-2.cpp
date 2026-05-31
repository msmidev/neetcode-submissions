class Solution {
public:
    int findMin(vector<int> &nums) {
        // can rely on two items in the array
        if (nums.size() == 1)
            return nums[0];

        int l = 0;
        int r = nums.size() - 1;

        // already sorted case
        if (nums[0] < nums[r])
            return nums[0];

        // find inflection point
        while(l != r) {
            int m = l + (r - l) / 2;

            if (nums[l] < nums[m]) {
                // min elem in right part
                l = m;
            } else {
                // min elem in left part
                r = m;
            }
        }

        return nums[l + 1];
    }
};
