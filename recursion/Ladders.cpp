#include <bits/stdc++.h>
using namespace std;
// solve it using DP in dp section this is just 4 recursion practise
int countWays(int n, vector<int> &dp)
{
    // base case
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (n == 0)
    {
        return dp[n] = 1;
    }

    // rec case
    return dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp) + countWays(n - 3, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << countWays(n, dp) << endl;
    return 0;
}