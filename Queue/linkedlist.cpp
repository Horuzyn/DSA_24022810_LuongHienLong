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

Node* front = nullptr;
Node* rear = nullptr;

bool isEmpty()
{
    return front == nullptr;
}

void enqueue(int value)
{
    Node *newNode = new Node(value);
    if (isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    else
    {
        int value = front->data;
        Node *temp = front;
        front = front->next;

        if (front == nullptr)
        {
            rear = nullptr;
        }

        delete temp;
        return value;
    }
}

int peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    else
    {
        return front->data;
    }
}

int size()
{
    int count = 0;
    Node *current = front;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    cout << dequeue() << endl;
    cout << dequeue() << endl;
    cout << dequeue() << endl;

    return 0;
}