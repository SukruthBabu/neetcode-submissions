class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int origp) {
        int ROWS = image.size();
        int COLS = image[0].size();

        // false: out of bounds check
        if (min(sr, sc) < 0 || sr == ROWS || sc == COLS)
        {
            return;
        }

        // false: adjacent cell pixel is not the same color as the original pixel 
        // return same color value 
        if (image[sr][sc] != origp)
        {
            return;
        }

        // true: adjacent cell pixel is the same color as the original pixel 
        // update the color 
        if (image[sr][sc] == origp)
        {
            image[sr][sc] = color;
        }

        dfs(image, sr + 1, sc, color, origp);
        dfs(image, sr - 1, sc, color, origp);
        dfs(image, sr, sc + 1 , color, origp);
        dfs(image, sr, sc - 1, color, origp);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int origp = image[sr][sc];
        if(origp == color)
        {
            return image;
        }

        dfs(image, sr, sc, color, origp);

        return image;

    }
};