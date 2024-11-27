#include <bits/stdc++.h>
using namespace std;

// Input: s = "hello"
// Output: "holle"
// "aA"
// "Aa"
string reverseVowels(string s)
{
    int start = 0;
    int end = s.length() - 1;
    unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while (start <= end)
    {

        while (st.find(s[start]) == st.end() && start <= end)
        {
            start++;
        }
        while (st.find(s[end]) == st.end() && start <= end)
        {
            end--;
        }
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
int main()
{
    cout << reverseVowels("aA") << endl;
}