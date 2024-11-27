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

int Xor(int n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    if (n % 4 == 1)
    {
        return 1;
    }
    if (n % 4 == 2)
    {
        return n + 1;
    }
    return 0;
}
int main()
{
    _
            cout
        << (Xor(2) ^
            Xor(9))
        << endl;
    return 0;
}