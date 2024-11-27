#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image,
         int sr, int sc, int newColor, vector<vector<int>> &ans, int iniColor)
{
    int n = image.size();
    int m = image[0].size();

    ans[sr][sc] = newColor;

    if (sr > 0 && image[sr - 1][sc] == iniColor && ans[sr - 1][sc] == newColor)
    {
        dfs(image, sr - 1, sc, newColor, ans, iniColor);
    }
    if (sc > 0 && image[sr][sc - 1] == iniColor && ans[sr][sc - 1] == newColor)
    {
        dfs(image, sr, sc - 1, newColor, ans, iniColor);
    }
    if (sr < n && image[sr + 1][sc] == iniColor && ans[sr + 1][sc] == newColor)
    {
        dfs(image, sr + 1, sc, newColor, ans, iniColor);
    }
    if (sc < m && image[sr][sc + 1] == iniColor && ans[sr][sc + 1] == newColor)
    {
        dfs(image, sr, sc + 1, newColor, ans, iniColor);
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image,
                              int sr, int sc, int newColor)
{

    int iniColor = image[sr][sc];
    vector<vector<int>> ans = image;
    dfs(image, sr, sc, newColor, ans, iniColor);
    return ans;
}