class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results {};
        unordered_map<int, int> differences{};

        for(int i = 0; i < nums.size(); i++) {
            int currentDifference = target - nums[i];
            cout << i << " " << currentDifference << "\n";
            if (differences.contains(nums[i])) {
                int j = differences[nums[i]];
                cout << "difference found " << j;
                if (i <= j) {
                    results.push_back(i);
                    results.push_back(j);
                } else {
                    results.push_back(j);
                    results.push_back(i);
                }
                return results;
            }
            differences[currentDifference] = i;
        }

        return results;
    }
};
