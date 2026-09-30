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

void removeIndex(Node *&head, int index)
{
    if (head == nullptr)
    {
        throw runtime_error("List is empty");
    }

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    for (int i = 0; i < index - 1; ++i)
    {
        if (current->next == nullptr)
        {
            throw out_of_range("Index out of range");
        }
        current = current->next;
    }

    Node *temp = current->next;
    if (temp == nullptr)
    {
        throw out_of_range("Index out of range");
    }
    current->next = temp->next;
    delete temp;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    removeIndex(head, 1);

    for (Node *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}