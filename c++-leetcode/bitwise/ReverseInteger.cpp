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

int reverse(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        /* code */
        int last_digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + last_digit;
        // int k = (last_digit * ceil(pow(10, i)));
        // ans = ans + k;
        // cout << ans << endl;
        // i++;
        n = n / 10;
    }
    return ans;
}
int main()
{
    _
            cout
        << reverse(982) << endl;
    return 0;
}