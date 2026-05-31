class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> results(n + 1);
        for(int i = 0; i <= n; i++) {
            int count = 0;
            int n = i;
            while(n) {
                count++;
                n = n & (n - 1);
            }
            results[i] = count;
        }
        return results;
    }
};
