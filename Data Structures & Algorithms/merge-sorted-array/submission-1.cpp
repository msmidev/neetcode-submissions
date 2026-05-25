class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int current = m + n - 1;
        int end1 = m - 1;
        int end2 = n - 1;

        while(end2 >= 0) {
            if(end1 >= 0 && nums1[end1] > nums2[end2]) {
                nums1[current--] = nums1[end1--];
            } else {
                nums1[current--] = nums2[end2--];
            }
        }
    }
};