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

void removeHead(Node *&head)
{
    if (head == nullptr)
    {
        throw runtime_error("List is empty");
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    removeHead(head);

    for (Node *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}