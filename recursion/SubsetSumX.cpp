#include <bits/stdc++.h>
using namespace std;

int countSubsets(vector<int> arr, int n, int i, int X)
{
    // base case
    if (i == n)
    {
        if (X == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // rec case
    int t = countSubsets(arr, n, i + 1, X - arr[i]);
    int nt = countSubsets(arr, n, i + 1, X);
    return t + nt;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int X = 6;

    cout << countSubsets(arr, arr.size(), 0, X);
    return 0;
}