#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//" hello world "
// word hello
string rev(string str)
{
    int start = 0;
    int end = str.length() - 1;
    int wStart = 0;
    int wEnd = 0;
    vector<string> splited;
    for (int i = 0; i < str.length(); i++)
    {
        while (str[wStart] == ' ' && wStart < str.length())
        {
            wStart++;
            wEnd++;
        }
        i = wStart;
        while (str[wEnd] != ' ' && wEnd < str.length())
        {
            wEnd++;
        }
        i = wEnd;
        wEnd--;
        splited.pb(str.substr(wStart, wEnd));
    }
    for (string s : splited)
    {
        cout << s << endl;
    }
    return str;
}
int main()
{
    cout << rev("hello world mitesh");
    return 0;
}