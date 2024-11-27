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
int main()
{
    typedef pair<int, int> ii;
    int n;
    cin >> n;
    map<ii, string> table;
    while (n--)
    {
        ii code;
        string name;
        cin >> code.fi >> code.se;
        cin >> name;
        table[code] = name;
    }
    int q;
    cin >> q;
    while (q--)
    {
        ii code;
        cin >> code.fi >> code.se;
        cout << table[code] << endl;
    }
}