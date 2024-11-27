#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class List
{
public:
    Node *head;

    Node *insertLast(int data)
    {
        Node *node = new Node(data);
        if (head == NULL)
        {
            head = node;
        }
        Node *temp1 = head;
        Node *temp2 = temp1;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }

        temp1->next = node;
        return head;
    }
};
int main()
{
    Node *n = new Node(5);
    n->data = 10;
    cout << n->data << endl;
}