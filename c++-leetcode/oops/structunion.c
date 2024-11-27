#include <stdio.h>
struct Stud
{
    int id;
    char name[32];
};
union Ustud
{
    int id;
    char name[32];
};
int main()
{
    struct Stud s1;
    union Ustud s2;
    gets(s2.name);
    puts(s2.name);
    printf("size of stuct: %d\n", sizeof(s1));
    printf("size of union: %d\n", sizeof(s2));
    return 0;
}