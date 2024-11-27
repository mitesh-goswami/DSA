#include <bits/stdc++.h>
using namespace std;
#define pb push_back

string firstNonReChar(string str)
{
    string ans = "";
    map<char, int> mp;
    queue<char> q;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        mp[ch]++;
        q.push(ch);
        while (!q.empty())
        {
            if (mp[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                ans.pb(ch);
                break;
            }
        }
        if (q.empty())
        {
            ans.pb('#');
        }
    }
    return ans;
}

int main()
{
    string str = "aabc";
    string ans = firstNonReChar(str);
    cout << ans << endl;
}