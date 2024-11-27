#include <bits/stdc++.h>
using namespace std;
// 10100110
// a1>a2<a3<a4<a5>a6<a7<a8
// if ai < ai+1 then si = 0
// else if ai > ai+1 then si = 1
// trick to solve this problem is finding pattern
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '0' && str[i + 1] == '1')
            {
                count++;
            }
        }
        if (str[0] == '1')
        {
            count++;
        }
        if (str[n - 2] == '0')
        {
            count++;
        }
        cout << count << endl;
    }
}