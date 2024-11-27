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

int decimalToBinary(int n)
{
    int i = 0;
    int ans = 0;
    int k = 0;
    while (n != 0)
    {
        int last_digit = n & 1;
        cout << "last digit: " << last_digit << endl
             << "i : " << i << endl;
        k = ceil(last_digit * pow(10, i));
        ans = ans + k;
        cout << ans << endl;
        n = n >> 1;
        i++;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        if (last_digit == 1)
        {
            int k = (last_digit * ceil(pow(2, i)));
            ans = ans + k;
        }
        i++;
        n /= 10;
    }
    return ans;
}

int main()
{
    cout << decimalToBinary(5) << endl;
    cout << binaryToDecimal(101);

    // int i = 0;
    // int ans = 0;
    // int n = 5;
    // while (n != 0)
    // {
    //     int last_digit = n & 1;
    //     ans = (last_digit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout << ans << endl;
    return 0;
}