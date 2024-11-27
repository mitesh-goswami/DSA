#include <stdio.h>
#include <stdlib.h>
void revArray(int arr[], int n)
{
    int start = 0;
    // int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int end = n - 1;
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = end;
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
}
int main()
{
    int *arr = (int *)calloc(5, sizeof(int));
    // int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr);
    printf("size of arr: %d size of int: %d \n", sizeof(arr), sizeof(int));
    // inputArray(arr, n);
    printArray(arr, n);
    revArray(arr, n);
    printf("Rev Array\n");
    printArray(arr, n);
    return 0;
}