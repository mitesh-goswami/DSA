#include <bits/stdc++.h>
using namespace std;

void printBoard(int n, int board[][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
bool canPlace(int board[][20], int n, int x, int y)
{
    // col
    for (int k = 0; k < x; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }
    // left dig
    int i = x;
    int j = y;
    while (i >= 0 and j >= 0)
    {
        if (board[i--][j--] == 1)
        {
            return false;
        }
    }
    // right diag
    i = x;
    j = y;
    while (i >= 0 and j < n)
    {
        if (board[i--][j++] == 1)
        {
            return false;
        }
    }
    return true;
}
bool solveQueen(int n, int board[][20], int i)
{
    // base case
    if (i == n)
    {
        // print board
        printBoard(n, board);
        return true;
    }
    // rec case
    // trying to put queen in every row
    for (int j = 0; j < n; j++)
    {
        // wether the current i,j is safe or not
        if (canPlace(board, n, i, j))
        {
            board[i][j] = 1;
            bool success = solveQueen(n, board, i + 1);
            if (success)
            {
                return true;
            }
            // backtrack
            board[i][j] = 0;
        }
    }
    return false;
}
int main()
{
    int board[20][20] = {0};
    int n;
    cin >> n;
    solveQueen(n, board, 0);
    return 0;
}