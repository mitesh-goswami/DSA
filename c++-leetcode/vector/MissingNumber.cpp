#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc(t) \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define fi first
#define se second
#define debug1(x) cerr << #x << " = " << x << '\n';
#define debug2(x, y) cerr << #x << " = " << x << "   " << #y << " = " << y << "\n";
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
// 0 1 3
void swap(vector<int> &arr, int i, int correct)
{
    int temp = arr[i];
    arr[i] = arr[correct];
    arr[correct] = temp;
}
int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    while (i < n)
    {
        int correct = arr[i];
        if (arr[i] != correct && arr[i] < n)
        {
            swap(arr, i, correct);
        }
        else
        {
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (j != arr[j])
        {
            return j;
        }
    }
    return n;
}

int main()
{
    // vector<int> arr = {0, 1};
    vector<int> arr = {1};
    cout << missingNumber(arr) << endl;
}