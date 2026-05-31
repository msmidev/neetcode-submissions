class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> results(n + 1);
        for(int i = 1; i <= n; i++) {
            results[i] = results[i >> 1] + (i & 1);
        }
        return results;
    }
};
