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

void removeTail(Node *&head)
{
    if (head == nullptr)
    {
        throw runtime_error("List is empty");
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *current = head;
    Node *temp = current->next;
    while (temp->next != nullptr)
    {
        current = current->next;
        temp = temp->next;
    }
    current->next = nullptr;
    delete temp;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    removeTail(head);

    for (Node *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}