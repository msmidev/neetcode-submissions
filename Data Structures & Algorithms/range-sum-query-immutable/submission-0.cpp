class NumArray {
private:
    vector<int> prefixSums;
public:
    NumArray(vector<int>& nums) {
        int total = 0;
        for(int i : nums) {
            total += i;
            prefixSums.push_back(total);
        }
    }
    
    int sumRange(int left, int right) {
        int preRight = prefixSums[right];
        int preLeft = (left > 0) ? prefixSums[left - 1] : 0;
        return preRight - preLeft;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */