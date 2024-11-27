#include <stdio.h>

int cb_square(int num)
{
    return num * num;
}
int cb_cube(int num)
{
    return num * num * num;
}
// callback function
int calculator(int num, int (*fptr)(int))
{
    return fptr(num);
}
int main()
{
    int ans_square = calculator(5, cb_square);
    int ans_cube = calculator(5, cb_cube);
    printf("squre(5): %d\n", ans_square);
    printf("cube(5): %d\n", ans_cube);
    // function pointer
    int (*ptr)(int) = cb_square;
    int ans = ptr(4);
    printf("square(4): %d\n", ans);
}