#include <stdio.h>
#include <stdlib.h>
// a->b->c->d->e->NULL
struct Node
{
    struct Node *next;
    char data;
};
struct Node *insertNode(char data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;
    return node;
}
// struct Node* createList(int n){
//     char cha;
//     scanf("%c", &cha);
//     struct Node* head = insertNode(cha);
//     //n--;
//     struct Node* temp = head;
//     //char ch='a';
//     printf("No. of nodes: %d \n", n);
//     for(int i =1; i < n; i++){
//         //struct Node* node = malloc(sizeof(struct Node));

//         printf("Node data %d\n",i);
//         char ch;
//         scanf("%c", &ch);
//         printf("Node data =%d\n",i);
//         temp->next = insertNode(ch);
//         printf("Node data ==%d\n",i);
//         temp = temp->next;
//     }
//     return head;
// }
struct Node *getMid(struct Node *head)
{
    struct Node *s = head;
    struct Node *f = head;
    struct Node *ans = head;
    while (f != NULL && f->next != NULL)
    {
        ans = s;
        s = s->next;
        if (f->next != NULL)
        {
            f = f->next->next;
        }
    }
    return s;
}
void strRev(char str[])
{
    int start = 0;
    int i = 0;
    int size = 0;
    while (str[i] != '\0')
    {
        i++;
        size++;
    }
    int end = size - 1;
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    // return str;
}
int main()
{
    // // int n = 5;
    // int a = 1;

    // // printf("%d", a << 1);

    // //     else
    // //     {
    // //         printf("odd\n");
    // //     }
    // // }
    // char ch[6] = "string";
    // int start = 0;
    // int size = 0;
    // // for (int i = 0; ch[i] != "\0"; i++)
    // // {
    // //     size++;
    // // }
    // int i = 0;
    // while (ch[i] != '\0')
    // {
    //     size++;
    //     i++;
    // }
    // printf("%d\n", size);
    // int end = size - 1;
    // // printf("%d", end);
    // char temp = 'a';
    // while (start < end)
    // {
    //     temp = ch[start];
    //     // printf("%c", ch[end]);
    //     ch[start] = ch[end];
    //     // printf("%c", ch[start]);
    //     ch[end] = temp;
    //     // printf("%c", temp);
    //     start++;
    //     end--;
    // }
    // // printf("%d", start);
    // // printf("%d", end);
    // //  for (int i = 0; ch[i] != '\0'; i++)
    // //  {
    // //      printf("%c", ch[i]);
    // //  }
    // i = 0;
    // while (i < size)
    // {
    //     printf(" (%c = %d)", ch[i], i);
    //     i++;
    // }
    char str[42];
    gets(str);
    strRev(str);
    puts(str);
    struct Node *head = malloc(sizeof(struct Node));
    head->next = malloc(sizeof(struct Node));
    head->data = 'a';
    head->next->data = 'b';
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 'c';
    head->next->next->next = NULL;

    head->next->next->next = insertNode('d');
    head->next->next->next->next = insertNode('e');
    // head->next->next->next->next->next = NULL;
    head->next->next->next->next->next = insertNode('f');
    head->next->next->next->next->next->next = NULL;

    printf("size of struct: %d size of struct*: %d\n", sizeof(struct Node), sizeof(struct Node *));
    struct Node *mid = getMid(head);
    printf("mid element:%c\n", mid->data);

    // reversing LL
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = head->next;
    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        if (next != NULL)
        {
            next = next->next;
        }
    }
    struct Node *temp = prev;
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
}