#include <bits/stdc++.h>
using namespace std;
/*
 * by default priorrity queue is max heap
 * to make it min heap we should follow following method
 * priority_queue<int, vector<int>, greater<int>> mpq;
 */
int main()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(9);
    pq.push(1);
    pq.push(10);
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(4);
    mpq.push(9);
    mpq.push(1);
    mpq.push(10);
    cout << mpq.top() << endl;
}