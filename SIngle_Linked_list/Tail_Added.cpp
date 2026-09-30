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

void addNodeAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    addNodeAtTail(head, 4);
    for (Node *current = head; current != nullptr; current = current->next)
    {
        if (current->next == nullptr)
        {
            Node *Tail = new Node(4);
            current->next = Tail;
        }
    }

    for (Node *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}