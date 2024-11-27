#include <bits/stdc++.h>
using namespace std;

void sortO(int a[], int n)
{
    int cZ = 0, cO = 0, cT = 0;
    // int n = a.size();
    int b[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            b[cZ++] = 0;
        }
    }
    cO = cZ + 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            b[cO++] = 1;
        }
    }
    cT = cO + 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            b[cT++] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void sortT(int a[])
{
}
int main()
{
    int a[] = {0, 2, 1, 2, 0};
    sortO(a, 5);
    return 0;
}