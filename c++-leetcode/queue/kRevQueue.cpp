#include <bits/stdc++.h>
using namespace std;
#define pb push_back

queue<int> kRev(queue<int> &q, int k)
{
    stack<int> st;
    int t = q.size() - k;
    while (k--)
    {
        int data = q.front();
        st.push(data);
        q.pop();
        cout << "stack data: " << data << endl;
    }

    while (!st.empty())
    {
        int data = st.top();
        q.push(data);
        st.pop();
        cout << "stack rev data: " << data << endl;
    }
    // int t = q.size() - k;
    //  putting 1st n-k element in back
    //   5 4 3 2 1
    while (t--)
    {
        int data = q.front();
        q.pop();
        q.push(data);
    }
    return q;
}

int main()
{
    vector<int> v = {1, 2, 3, 5, 4};
    queue<int> q;
    //{3,2,1,5,4}
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(4);
    queue<int> ans = kRev(q, 3);
    queue<int> qCopy = q;
    while (!ans.empty())
    {
        int data = ans.front();
        ans.pop();
        cout << data << endl;
    }
    return 0;
}