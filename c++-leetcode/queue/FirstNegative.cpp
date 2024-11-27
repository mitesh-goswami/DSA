#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> firstNeg(vector<int> &a, int k)
{
    deque<int> d;
    vector<int> ans;
    // finding the first neg in 1st block
    for (int i = 0; i < k; i++)
    {
        if (a[i] < 0)
        {
            d.push_back(i);
        }
    }
    if (d.size() > 0)
    {
        ans.pb(a[d.front()]);
    }
    else
    {
        ans.pb(0);
    }
    // for remaining elements
    for (int i = k; i < a.size(); i++)
    {
        // removing element
        if (!d.empty() && i - d.front() >= k)
        {
            d.pop_front();
        }
        // adding element
        if (a[i] < 0)
        {
            d.pb(i);
        }

        // adding ans
        if (d.size() > 0)
        {
            ans.pb(a[d.front()]);
        }
        else
        {
            ans.pb(0);
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {-9, 2, -44, 99, 8};
    vector<int> ans;
    ans = firstNeg(a, 2);
    for (int i : ans)
    {
        cout << i << endl;
    }
}