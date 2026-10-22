#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int stackArr[length];
int stackTop = -1;

bool isFull()
{
    if (stackTop == length - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{
    if (stackTop == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int value)
{
    if (isFull())
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        stackTop++;
        stackArr[stackTop] = value;
    }
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
        stackTop--;
        return stackArr[stackTop + 1];
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
        return stackArr[stackTop];
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    return 0;
}