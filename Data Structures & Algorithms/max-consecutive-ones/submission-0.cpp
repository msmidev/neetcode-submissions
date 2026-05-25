class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int currentConsecutive = 0;

        for (int i : nums) {
            if (i == 1)
                currentConsecutive++;
            else
                currentConsecutive = 0;

            if (currentConsecutive > maxConsecutive)
                maxConsecutive = currentConsecutive;
        }

        return maxConsecutive;
    }
};