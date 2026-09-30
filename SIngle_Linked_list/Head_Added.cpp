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

void addNodeAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    addNodeAtHead(head, 0);

    for (Node *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }
}