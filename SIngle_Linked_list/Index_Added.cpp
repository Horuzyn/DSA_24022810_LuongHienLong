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

void addNodeAtIndex(Node *&head, int val, int index)
{
    Node *newNode = new Node(val);
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *current = head;
    for (int i = 0; i < index - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    if (current == nullptr)
    {
        throw out_of_range("Index out of bounds");
    }
    newNode->next = current->next;
    current->next = newNode;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    addNodeAtIndex(head, 0, 0);
    addNodeAtIndex(head, 4, 1);

    for (Node *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}