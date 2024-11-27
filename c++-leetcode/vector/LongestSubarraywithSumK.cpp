#include <bits/stdc++.h>
using namespace std;

int bF(vector<int> &arr, int k)
{
    int n = arr.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                // return j - i + 1;
                maxi = max(maxi, j - i + 1);
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout << bF(arr, k) << endl;
    return 0;
}