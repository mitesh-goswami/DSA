#include <bits/stdc++.h>
using namespace std;
/*
C/C++ Program for Reverse words in a given string-

"work I Synaptics for " becomes "I work for Synaptics ".
*/
string breakTwo(string s)
{
}
string revWVec(string s)
{
    vector<string> words;
    string word;
    for (char c : s)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                words.push_back(word);
                word = "";
            }
        }
        else
        {
            word += c;
        }
    }
    for (int i = 0; i < words.size(); i += 2)
    {
        swap(words[i], words[i + 1]);
    }
    string ans = "";
    for (string str : words)
    {
        ans += str;
        ans += " ";
    }
    return ans;
}
string revW(string s)
{
    string temp = "";
    string temp1 = "";
    string ans = "";
    // pair<string, string> p;
    int num = 0;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (flag == 0)
        {
            while (s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            // cout << "temp " << temp << endl;
            flag = 1;
        }
        // flag = 1;
        if (s[i] == ' ')
        {
            flag = 1;
            continue;
        }
        if (flag == 1)
        {
            // i++;
            if (s[i] != ' ')
            {
                cout << " in temp1 :" << s[i] << endl;
                // while (s[i] != ' ')
                // {
                //     temp1 += s[i];
                //     i++;
                // }
                // flag = 0;
                // while (s[i] != ' ')
                // {

                //     temp1 += s[i];
                //     i++;
                // }
                // i++;
                temp1 += s[i];
                //  i++;
                //   cout<<"tem"
                //   i++;
                //   continue;
            }
            flag = 0;
            // temp1 += " ";
        }

        temp1 += " ";
        ans += temp1 + temp;
        cout << "printing ans: " << ans << endl;
        i++;
        ans += " ";
        flag = 0;
        // if (s[i] == ' ')
        // {
        //     i++;
        // }
        temp1 = "";
        temp = "";
    }
    return ans;
}
int main()
{
    string str = "work I Synaptics for ";
    string ans = revWVec(str);
    cout << ans << endl;
}

// dsubrama@synaptics.com
