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
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};
int noSetBits(int n)
{
    // log n times
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    _
        Solution s;
    cout << s.hammingWeight(15) << endl;
    cout << "my method answers (log n) complexity: " << noSetBits(15) << endl;
    return 0;
}

/*
    TODO:
    1. REVERSE INTEGER
    2. COMPLEMENT OF BASE 10 INTEGER
    3. POWER OF TWO
*/