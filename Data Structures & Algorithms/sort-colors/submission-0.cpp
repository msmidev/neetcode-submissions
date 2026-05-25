class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors[3] {};

        for(int i : nums)
            colors[i]++;
        
        int i = 0;
        for(int j = 0; j <= 2; j++)
            for(int k = 0; k < colors[j]; k++)
                nums[i++] = j;
    }
};