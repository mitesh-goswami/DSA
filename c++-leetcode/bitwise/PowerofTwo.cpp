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

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
        {
            return false;
        }
        if (n == pow(-2, 31) || (n == pow(2, 31) - 1))
            return false;
        if ((n & (n - 1)) == 0)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    _
        Solution solution;
    cout << solution.isPowerOfTwo(32);
}