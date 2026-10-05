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

void traverseBackwardDNode(DNode *tail)
{
    DNode *temp = tail;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
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

    DNode *tail = head->next->next->next;

    traverseBackwardDNode(tail);

    return 0;
}