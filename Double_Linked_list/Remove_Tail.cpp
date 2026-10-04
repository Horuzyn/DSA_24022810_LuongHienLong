#include <iostream>
#include <math.h>

using namespace std;

struct DNode
{
    int data;
    DNode *next;
    DNode *prev;

    DNode(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void removeTailDNode(DNode *&head)
{
    if (head == nullptr)
    {
        return;
    }

    DNode *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    if (temp->prev != nullptr)
    {
        temp->prev->next = nullptr;
    }
    else
    {
        head = nullptr;
    }

    delete temp;
}

int main()
{
    DNode *head = new DNode(10);
    head->next = new DNode(20);
    head->next->prev = head;
    head->next->next = new DNode(30);
    head->next->next->prev = head->next;
    head->next->next->next = new DNode(40);
    head->next->next->next->prev = head->next->next;

    removeTailDNode(head);

    for (DNode *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}