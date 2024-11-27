#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 9, 8, 1, 4};
    int maxi = INT_MIN;
    int maxiT = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        maxi = max(maxi, v[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == maxi)
        {
            continue;
        }
        maxiT = max(maxiT, v[i]);
    }
    // cout << maxiT << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    // for (int i : v)
    // {
    //     cout << i << endl;
    // }
    cout << v[v.size() - 2];
}