#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - 1 - top > 0)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack oveflow \n";
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow \n";
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack empty \n";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top >= 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    Stack stack(5);
    stack.push(9);
    stack.push(8);
    cout << stack.peek() << endl;
    while (!stack.isEmpty())
    {
        cout << stack.peek() << endl;
        stack.pop();
    }
    return 0;
}
