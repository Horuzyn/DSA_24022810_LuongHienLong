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

int accessNode(Node *head, int index)
{
    Node *current = head;
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
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << accessNode(head, 0) << endl;
    cout << accessNode(head, 1) << endl;
    cout << accessNode(head, 2) << endl;
    cout << accessNode(head, 3) << endl;

    return 0;
}