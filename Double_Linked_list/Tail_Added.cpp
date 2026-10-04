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

void tailAddedDNode(DNode *&head, int val)
{
    DNode *newNode = new DNode(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    DNode *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
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

    tailAddedDNode(head, 50);

    for (DNode *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}