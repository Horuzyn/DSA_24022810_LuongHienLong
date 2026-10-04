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

void removeIndexDNode(DNode *&head, int index)
{
    if (head == nullptr || index < 0)
    {
        return;
    }

    DNode *temp = head;

    for (int i = 0; i < index && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        return;
    }

    if (temp->prev != nullptr)
    {
        temp->prev->next = temp->next;
    }
    else
    {
        head = temp->next;
    }

    if (temp->next != nullptr)
    {
        temp->next->prev = temp->prev;
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

    removeIndexDNode(head, 2);

    for (DNode *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}