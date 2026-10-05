#include <iostream>
#include <math.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void traverseBackward(Node *head)
{
    if (head == nullptr)
        return;

    traverseBackward(head->next);
    cout << head->data << " ";
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    traverseBackward(head);

    return 0;
}