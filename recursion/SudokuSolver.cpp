#include <bits/stdc++.h>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int no, int n)
{
    for (int k = 0; k < n; k++)
    {
        if (mat[i][k] == no || mat[k][j] == no)
        {
            return false;
        }
    }
    // checking subgrid
    int sx = (i / 3) * 3;
    int sy = (j / 3) * 3;
    for (int x = sx; x < sx + 3; x++)
    {
        for (int y = sy; y < sy + 3; y++)
        {
            /* code */
            if (mat[x][y] == no)
            {
                return false;
            }
        }
    }
    return true;
}
bool solveSudoku(int mat[][9], int i, int j, int n)
{
    // base case
    if (i == n)
    {
        // print sudoku
        for (int x = 0; x < 9; x++)
        {
            for (int y = 0; y < 9; y++)
            {
                cout << mat[x][y] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    // rec case
    if (j == n)
    {
        return solveSudoku(mat, i + 1, 0, n);
    }
    // to be skipped
    if (mat[i][j] != 0)
    {
        return solveSudoku(mat, i, j + 1, n);
    }
    // to be filled
    for (int no = 1; no <= n; no++)
    {
        if (isSafe(mat, i, j, no, n))
        {
            mat[i][j] = no;
            bool subProblem = solveSudoku(mat, i, j + 1, n);
            if (subProblem)
            {
                return true;
            }
        }
    }
    mat[i][j] = 0;
    return false;
}
int main()
{
    int n = 9;
    int mat[9][9] =
        {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    if (!solveSudoku(mat, 0, 0, n))
    {
        cout << "No solution exist!";
    }
}