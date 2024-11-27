#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

int mid(Node *head)
{
    Node *f = head;
    Node *s = head;
    while (f != NULL && f->next != NULL)
    {
        f = f->next->next;
        s = s->next;
    }
    return s->data;
}

int main()
{
    Node *node = new Node();
    Node *head = node;
    node->data = 2;
    cout << node->data;
    node->next = new Node();
    node = node->next;
    node->data = 4;
    cout << node->data;
    node->next = new Node();
    node = node->next;
    node->data = 6;
    cout << node->data;
    node->next = new Node();
    node = node->next;
    node->data = 8;
    cout << node->data;
    node->next = new Node();
    node = node->next;
    node->data = 10;
    cout << node->data;
    cout << "\n Mid element: " << mid(head);
}