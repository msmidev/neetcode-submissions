class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> results(n + 1);
        int lastPow2Index = 1;
        for(int i = 1; i <= n; i++) {
            if (i == 2 * lastPow2Index)
                lastPow2Index = i;
            
            results[i] = 1 + results[i - lastPow2Index];
        }
        return results;
    }
};
