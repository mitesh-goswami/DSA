#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *next;
    char data;
    Node(char ch)
    {
        data = ch;
        next = NULL;
    }
};
// class A
// {
// public:
//     int data;
//     void printA()
//     {
//         cout << "A \n";
//     }
// };
// class B : public A
// {
// public:
//     int b_data;
//     void printB()
//     {
//         cout << "B \n";
//     }
// };
int main()
{
    // a->b->c->d->e->NULL
    // Node *head = NULL;
    // head->data = 'a';
    // head->next = new Node();
    // head->next->data = 'b';
    // head->next->next = new Node();
    // head->next->next->data = 'c';
    // head->next->next->next->next = new Node();
    // head->next->next->next->next->data = 'd';
    // head->next->next->next->next->next->next = new Node();
    // head->next->next->next->next->next->next->data = 'e';
    Node *head = new Node('a');
    head->next = new Node('b');
    head->next->next = new Node('c');
    head->next->next->next = new Node('d');
    // head->next->next->next = NULL;
    Node *a = head;
    while (a != NULL)
    {
        printf("%c", a->data);
        a = a->next;
    }
    // a->b->c->NULL
    Node *prev = NULL;
    Node *n = head->next;
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        // printf("%d %c", size, temp->data);
        temp->next = prev;
        prev = temp;
        temp = n;
        if (n != NULL)
            n = n->next;
        size++;
        // printf("%d %c", size, prev->data);
    }
    // temp->next = prev;
    // prev = temp;
    // printf("%d", size);
    printf("\n");
    Node *temp2 = prev;
    while (temp2 != NULL)
    {
        printf("%c", temp2->data);
        temp2 = temp2->next;
    }

    // B obj;
    // obj.printA();
}

/*
#include<stdio.h>
#define  DONOT_COMPILE 1
/*
struct myVar
{
int32 a;
short int b;
char c;
long long d;
}


fun1()
{
#if DONOT_COMPILE
#error 1
#endif
}



#define DONOT_COMPLILE

*/
/*

void fun1()
{
#if DONOT_COMPILE
printf("Inside 1");
#error 1
#endif
}
int main(){
    // int a = 0;
    // int num = a&0;
    // int  x = (a|(1<<11))|(1<<23);
    // printf("%x", x);
    // unsigned long long mask = 0;
    // mask = (1<<31) ;
    // printf("mask = %llx", mask);
    //  printf("mask = %d", mask);
    fun1();
}
*/