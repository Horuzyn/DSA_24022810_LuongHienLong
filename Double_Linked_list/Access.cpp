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

int accessDNode(DNode *head, int index)
{
    DNode *current = head;
    int count = 0;

    while (current != nullptr)
    {
        if (count == index)
        {
            return current->data;
        }
        count++;
        current = current->next;
    }
    throw out_of_range("Index out of bounds");
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

    cout << accessDNode(head, 0) << endl;
    cout << accessDNode(head, 1) << endl;
    cout << accessDNode(head, 2) << endl;
    cout << accessDNode(head, 3) << endl;
    cout << accessDNode(head, 4) << endl;

    return 0;
}