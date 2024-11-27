#include <bits/stdc++.h>
using namespace std;
string ans = "";
int lcs(string a, string b, int i, int j)
{
    if (i == a.size() || j == b.size())
    {
        return 0;
    }
    if (a[i] == b[j])
    {
        // ans += a[i];
        return 1 + lcs(a, b, i + 1, j + 1);
    }
    return max(lcs(a, b, i + 1, j), lcs(a, b, i, j + 1));
}

int main()
{
    string a = "kavita";
    string b = "mitesh";
    cout << lcs(a, b, 0, 0) << endl;
    // cout << ans;
    return 0;
}