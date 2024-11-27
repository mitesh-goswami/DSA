#include <bits/stdc++.h>
using namespace std;
vector<int> s;
void subset(const vector<int> &arr, int index)
{
    if (index == arr.size())
    {
        for (int i : s)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    // lenge
    s.push_back(arr[index]);
    subset(arr, index + 1);
    // nai lenge
    s.pop_back();
    subset(arr, index + 1);
    return;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> up(arr);
    vector<int> p;

    subset(up, 0);
    // arr.pop_back();
    return 0;
}