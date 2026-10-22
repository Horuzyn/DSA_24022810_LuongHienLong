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

Node* topNode = nullptr;

bool isEmpty()
{
    return topNode == nullptr;
}

void push(int value)
{
    Node *newNode = new Node(value);
    newNode->next = topNode;
    topNode = newNode;
}

int pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        int value = topNode->data;
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
        return value;
    }
}

int top()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return topNode->data;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);

    cout << top() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    return 0;
}