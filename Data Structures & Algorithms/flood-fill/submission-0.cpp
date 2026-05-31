class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startingColor = image[sr][sc];
        dfs(image, sr, sc, startingColor, color);
        return image;
    }

    void dfs(vector<vector<int>>& image,
        int r,
        int c,
        int startingColor,
        int targetColor) {
            //handle out of bounds
            if (r < 0 || c < 0 || r >= image.size() || c >= image[0].size())
                return;

            // handle color already changed or not in original flood space
            int currentColor = image[r][c];
            if (currentColor == targetColor || currentColor != startingColor)
                return;
            
            image[r][c] = targetColor;
            dfs(image, r - 1, c, startingColor, targetColor);
            dfs(image, r + 1, c, startingColor, targetColor);
            dfs(image, r, c - 1, startingColor, targetColor);
            dfs(image, r, c + 1, startingColor, targetColor);
        }
};