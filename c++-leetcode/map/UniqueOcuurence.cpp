#include <bits/stdc++.h>
using namespace std;
/*
Concept of map and sets
map stores as key the value of array and as value the ocuurence of that value.
then in set we are storingg all the values inserted in map
as set stores only unique element.
so if size of map and set is equal then we have uniqe occurence.
*/
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> mp;
        for (int i : arr)
        {
            if (mp.find(i) != mp.end())
            {
                mp[i]++;
            }
            else
            {
                mp[i] = 1;
            }
        }
        set<int> st;
        for (auto it : mp)
        {
            st.insert(it.second);
        }
        if (mp.size() == st.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};