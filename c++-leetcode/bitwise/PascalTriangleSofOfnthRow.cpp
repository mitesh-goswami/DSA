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

int sumOfnthRow(int n)
{
    // sum of each row = 2^n
    // sum of nth row = 2 ^(n-1)
    return 1 << (n - 1);
}

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i, j = 0;
        int sum = 0;
        int minimum = INT_MAX;
        while (j < nums.size())
        {
            sum = sum + nums[j];
            while (sum > target)
            {
                sum = sum - nums[i];
                i++;
            }
            j++;
        }
    }
};
int main()
{
    cout << sumOfnthRow(4) << endl;
}