#include <bits/stdc++.h>
using namespace std;

void subSeq(string p, string up)
{
    if (up.size() == 0)
    {
        cout << p << endl;
        return;
    }
    char ch = up[0];
    // up.substr
    subSeq(p + ch, up.substr(1));
    subSeq(p, up.substr(1));
}
vector<string> subSeq2(string p, string up, vector<string> &res)
{
    if (up.size() == 0)
    {
        res.push_back(p);
        return res;
    }
    char ch = up[0];
    subSeq2(p + ch, up.substr(1), res);
    subSeq2(p, up.substr(1), res);
    return res;
}
int main()
{
    vector<string> res;
    res = subSeq2("", "abc", res);
    cout << res.size() << endl;
    for (string s : res)
    {
        cout << s << endl;
    }
    // subSeq("", "abc");
    return 0;
}