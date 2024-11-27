#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int front;
    int rear;
    int size;
    int *arr;
    Queue()
    {
        size = 0;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    Queue(int size)
    {
        this->size = size;
        this->arr = new int[this->size];
        this->front = 0;
        this->rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "queue overflow" << endl;
        }
        arr[rear++] = data;
    }
    int peek()
    {
        if (front == size)
        {
        }
    }
};