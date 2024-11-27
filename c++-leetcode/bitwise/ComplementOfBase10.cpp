#include <bits/stdc++.h>
//#include "NumberSustemConversion.cpp"
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
    int bitwiseComplement(int n)
    {
        int x = n;
        if (n == 0)
        {
            return 1;
        }
        int mask = 0;
        while (x != 0)
        {
            mask = mask << 1;
            mask = mask | 1;
            x = x >> 1;
        }
        return ~n & mask;
    }
};

int mask(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n == 0)
        {
            return 0;
        }
        n = n >> 1;
        count++;
    }
    int ans = 0;
    for (int i = 0; i < count; i++)
    {
        ans = ans << 1;
        ans = ans | 1;
    }
    return ans;
}
int complement(int n)
{
    // int x = decimalToBinary(n);
    int m1 = mask(n);

    return ~n & m1;
}

int main()
{
    cout << "hekko";
    cout << "complemet: " << complement(5) << endl;
    Solution s;
    cout << s.bitwiseComplement(5) << endl;
    return 0;
}