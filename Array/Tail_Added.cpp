#include <iostream>
#include <math.h>
using namespace std;

const int length = 100;
int arr[length];

void insertElementTail(int value, int size)
{
    if (size >= length)
    {
        cout << "Array is full" << endl;
        return;
    }

    arr[size] = value;

    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertElementTail(10, size);

    return 0;
}