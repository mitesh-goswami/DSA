#include <bits/stdc++.h>
using namespace std;
int main()
{
    // hash map
    // unordered_map<char, int> mp;
    // mp.insert(make_pair('1', 2));
    // auto it = mp.find('1');
    // cout << "key: " << it->first << " value: " << it->second;

    // map<char, int> m2;
    // m2.insert(make_pair('a', 1));
    // m2.insert(make_pair('b', 2));
    // m2.insert(make_pair('c', 3));
    // // sort(mp);
    // //  m2.erase('b');

    // cout << endl;
    // for (pair<char, int> p : m2)
    // {
    //     // if (p.second == 2 || p.second == 1)
    //     {
    //         cout << "key: " << p.first << " value: " << p.second;
    //     }
    //     // else
    //     // {
    //     // }
    // }
    unordered_map<int, int> mp;
    vector<int> arr = {1, 4, 4, 4, 4, 2, 2, 9};
    for (int i : arr)
    {
        if ((mp.find(i) == mp.end()))
        {
            mp[i] = 1;
        }
        else
        {
            mp[i]++;
        }
    }
    int maxi = INT_MIN;
    for (pair<int, int> p : mp)
    {
        cout << p.first << " -> " << p.second << endl;
        // maxi = max(maxi, p.second);
    }
}