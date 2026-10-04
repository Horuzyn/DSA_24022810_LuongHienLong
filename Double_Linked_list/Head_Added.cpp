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

void addHeadDNode(DNode *&head, int val)
{
    DNode *newNode = new DNode(val);
    newNode->next = head;
    if (head != nullptr)
    {
        head->prev = newNode;
    }
    head = newNode;
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

        addHeadDNode(head, 5);

    for (DNode *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}