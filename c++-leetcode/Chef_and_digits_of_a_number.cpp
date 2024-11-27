#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        unordered_map<char, int> mp;
        for (int i = 0; i < n.size(); i++)
        {
            if (mp.find(n[i]) == mp.end())
            {
                mp.insert(make_pair(n[i], 1));
            }
            else
            {
                mp[n[i]]++;
            }
        }
        for (pair<char, int> it : mp)
        {
            // cout << it.first << " " << it.second << endl;
            if (it.second == n.size() - 1 || it.second == 1)
            {
                cout << "Yes" << endl;
                break;
            }
            else
            {
                cout << "No" << endl;
                break;
            }
        }

        // int sum = 0;
        // for (int i = 0; i < n.size(); i++)
        // {
        //     /* code */
        //     // mp.insert(n[i],)
        //     sum = sum + (n[i] - '0');
        // }
        // if (sum + 1 == n.size() || sum - 1 == 0)
        // {
        //     cout << "Yes" << endl;
        // }
        // else
        // {
        //     cout << "No" << endl;
        // }
    }
    return 0;
}