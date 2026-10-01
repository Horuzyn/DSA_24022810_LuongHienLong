#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int arr[length];

void insertElementHead(int value, int currentSize)
{
    if (currentSize >= length)
    {
        cout << "Array is full" << endl;
        return;
    }

    for (int i = currentSize; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;

    for (int i = 0; i <= currentSize; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int currentSize = 0;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        currentSize++;
    }

    insertElementHead(10, currentSize);

    return 0;
}