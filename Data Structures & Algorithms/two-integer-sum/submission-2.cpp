class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices{};

        for(int i = 0; i < nums.size(); i++) {
            int currentDifference = target - nums[i];
            if (indices.contains(currentDifference)) {
                int j = indices[currentDifference];
                return (i < j) ? vector<int> {i, j} : vector<int> {j, i};
            }
            indices[nums[i]] = i;
        }

        return {};
    }
};
