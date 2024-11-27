// #include <bits/stdc++.h>
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

void run()
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Thread running:" << i;
    }
}

int main()
{
    thread t1(run);
    t1.join();
}