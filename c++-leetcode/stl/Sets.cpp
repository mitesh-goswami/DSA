#include <bits/stdc++.h>
using namespace std;
pair<int, int> twoSum(const vector<int> &a1, const vector<int> &a2, int target)
{
    unordered_set<int> st;
    pair<int, int> ans;

    for (int i : a1)
    {
        st.insert(target - i);
    }
    for (int i : a2)
    {
        if (st.find(i) != st.end())
        {
            return make_pair(i, target - i);
        }
    }
    return ans;
}
int main()
{

    vector<int> a1 = {1, 4, 2, 5};
    vector<int> a2 = {1, 5, 2, 6};
    pair<int, int> p = twoSum(a1, a2, 9);
    cout << p.first << " : " << p.second;
}