#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int arr[5];
    int top;
};
void push(int arr[], int top, int size, int val)
{
    if (top < size - 1)
    {
        top++;
        arr[top] = val;
    }
}