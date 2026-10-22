#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int queueArr[length];
int front = -1;
int rear = -1;

bool isFull()
{
    if (rear == length - 1)
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
    if (front == -1 || front > rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queueArr[rear] = value;
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
        int value = queueArr[front];
        front++;
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
        return queueArr[front];
    }
}

int size()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return rear - front + 1;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    cout << dequeue() << endl;
    cout << dequeue() << endl;
    cout << dequeue() << endl;

    return 0;
}