#include <stdio.h>
#include "lib.h"
void func()
{
    static int val = 0;
    val++;
    printf("val: %d\n", val);
}
int main()
{
    add_one();
    add_one();
    print();
    num += 10;
    print();
    // static
    func();
    func();
}