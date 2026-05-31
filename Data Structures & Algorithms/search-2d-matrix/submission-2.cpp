class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size() * matrix[0].size() - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            int mValue = getValueLinear(matrix, m);
            if (mValue < target)
                l = m + 1;
            else if (mValue > target)
                r = m - 1;
            else
                return true;
        }

        return false;
    }

    int getValueLinear(vector<vector<int>>& matrix, int x) {
        cout << x << "\n";
        return matrix[x / matrix[0].size()][x % matrix[0].size()];
    }
};
