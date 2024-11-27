#include <bits/stdc++.h>
#define pb push_back
using namespace std;

// Input: s = "egg", t = "add"
// Output:
bool isIsomorphic(string s, string t)
{
    unordered_map<char, int> counter1;
    unordered_map<char, int> counter2;
    if (s.length() != t.length())
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        counter1[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        counter2[t[i]]++;
    }
    vector<int> s1;
    vector<int> s2;
    for (pair<char, int> p : counter1)
    {
        s1.pb(p.second);
    }
    for (pair<char, int> p : counter2)
    {
        s2.pb(p.second);
    }
    if (s1.size() != s2.size())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << isIsomorphic("paper", "title") << endl;
}