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

void indexAddedDNode(DNode *&head, int val, int index)
{
    DNode *newNode = new DNode(val);
    if (index == 0)
    {
        newNode->next = head;
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    DNode *current = head;
    for (int i = 0; i < index - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    if (current == nullptr)
    {
        cout << "Index out of bounds." << endl;
        delete newNode;
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != nullptr)
    {
        current->next->prev = newNode;
    }
    current->next = newNode;
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

    indexAddedDNode(head, 25, 2);

    for (DNode *current = head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
    }

    return 0;
}