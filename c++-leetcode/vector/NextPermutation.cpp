#include <bits/stdc++.h>
using namespace std;
/*
idea is to find long prefix
break point is when a[i] < a[i+1]
find the smallest greater to breakpoint
*/
vector<int> nP(vector<int> &a)
{
    int idx = -1;
    int n = a.size();
    for (int i = n - 2; i >= 0; i++)
    {
        if (a[i] < a[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }
    for (int i = n - 1; i > idx; i++)
    {
        if (a[i] > a[idx])
        {
            swap(a[i], a[idx]);
            break;
        }
    }
    reverse(a.begin() + idx + 1, a.end());
    return a;
}